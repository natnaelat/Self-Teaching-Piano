from openai import OpenAI
import serial
import time
import os

# Initialize the OpenAI client
client = OpenAI(
    api_key='YOUR OPENAI KEY HERE'
)


def generate_led_sequence_for_song(song_name):
    try:
        # Use the new chat completions API
        completion = client.chat.completions.create(
            model="gpt-3.5-turbo",
            messages=[
                {"role": "system", "content": "You are a helpful assistant that generates LED sequences for piano songs."},
                {"role": "user", "content": f"Generate an LED sequence for the song '{song_name}' where each note is represented by the LED number. Each LED corresponds to a piano key note and should be represented as a number. There are 6 LEDs, so there are 6 notes. LED 1 corresponds to A5, LED 2 corresponds to G5, LED 3 corresponds to F5, LED 4 corresponds to E5, LED 5 corresponds to D5, and LED 6 corresponds to C5. Return ONLY the sequence of LED numbers with no additional text, separated by spaces."}
            ],
            max_tokens=100
        )

        # Extract the LED sequence from the response
        led_sequence = completion.choices[0].message.content.strip()
        return led_sequence

    except Exception as e:
        print(f"An error occurred: {e}")
        return None


def send_sequence_to_arduino(sequence, port='COM4', baud_rate=9600):
    try:
        # Open the serial port
        arduino = serial.Serial(port, baud_rate)

        # Wait for the serial connection to establish
        time.sleep(5)

        # Send the sequence to Arduino
        print(f"Sending sequence to Arduino: {sequence}")

        for number in sequence.split():
            # Convert the number to a byte and send
            arduino.write(f"{number}\n".encode())
            print(f"Sent: {number}")
            time.sleep(1)  # Delay between sending numbers

        # Optionally, close the connection
        arduino.close()

        return True

    except serial.SerialException as e:
        print(f"Serial connection error: {e}")
        return False
    except Exception as e:
        print(f"An error occurred while sending sequence: {e}")
        return False


def load_previous_sequence(file_name):
    try:
        # Check if the song file exists
        if os.path.exists(file_name):
            with open(file_name, 'r') as file:
                led_sequence = file.read().strip()
                return led_sequence
        else:
            print("Song file not found.")
            return None
    except Exception as e:
        print(f"An error occurred while loading the song: {e}")
        return None


def save_sequence_to_file(led_sequence, song_name):
    try:
        # Replace spaces with underscores for the filename
        filename = song_name.replace(" ", "_") + ".txt"

        # Save the sequence to the file with the modified name
        with open(filename, 'w') as file:
            file.write(led_sequence)
        print(f"Sequence saved to {filename}")
    except Exception as e:
        print(f"An error occurred while saving the sequence: {e}")


def main():
    # Ask user whether they want to load a previous song or create a new song
    choice = input(
        "Do you want to load a previous song or create a new song? (previous/new): ").lower()

    if choice == "previous":
        file_name = input(
            "Enter the exact name of the song file (e.g., 'Twinkle_Twinkle_Little_Star.txt'): ")

        # Load the previous song's LED sequence
        led_sequence = load_previous_sequence(file_name)

        if led_sequence:
            print("Loaded LED sequence:", led_sequence)

            # Send sequence to Arduino
            send_choice = input(
                "Do you want to send the sequence to Arduino? (yes/no): ").lower()
            if send_choice == 'yes':
                success = send_sequence_to_arduino(led_sequence)
                if success:
                    print("Sequence sent successfully to Arduino!")
                else:
                    print("Failed to send sequence to Arduino.")

            # Replay the sequence until user says 'no'
            replay_choice = "yes"
            while replay_choice == "yes":
                replay_choice = input(
                    "Do you want to replay the sequence? (yes/no): ").lower()
                if replay_choice == "yes":
                    success = send_sequence_to_arduino(led_sequence)
                    if success:
                        print("Sequence replayed to Arduino!")
                    else:
                        print("Failed to replay sequence to Arduino.")

        else:
            print("Failed to load the previous song.")

    elif choice == "new":
        song_name = input("Enter the name of the song: ")

        # Generate the LED sequence for the new song
        led_sequence = generate_led_sequence_for_song(song_name)

        if led_sequence:
            print("Generated LED Sequence:", led_sequence)

            # Send the sequence to Arduino
            send_choice = input(
                "Do you want to send the sequence to Arduino? (yes/no): ").lower()
            if send_choice == 'yes':
                success = send_sequence_to_arduino(led_sequence)
                if success:
                    print("Sequence sent successfully to Arduino!")
                else:
                    print("Failed to send sequence to Arduino.")

            # Replay the sequence until user says 'no'
            replay_choice = "yes"
            while replay_choice == "yes":
                replay_choice = input(
                    "Do you want to replay the sequence? (yes/no): ").lower()
                if replay_choice == "yes":
                    success = send_sequence_to_arduino(led_sequence)
                    if success:
                        print("Sequence replayed to Arduino!")
                    else:
                        print("Failed to replay sequence to Arduino.")

            # Ask if user wants to save the sequence
            save_choice = input(
                "Do you want to save the sequence to a file? (yes/no): ").lower()
            if save_choice == 'yes':
                save_sequence_to_file(led_sequence, song_name)

        else:
            print("Failed to generate LED sequence.")

    else:
        print("Invalid choice. Please type 'previous' or 'new'.")


if __name__ == "__main__":
    main()
