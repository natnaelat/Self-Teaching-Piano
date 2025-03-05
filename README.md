# Self-Teaching Piano

## Overview

The Self-Teaching Piano is an Arduino-based project designed to help users learn and play simple songs using six buttons and corresponding LEDs. A buzzer plays musical notes when the buttons are pressed, and a switch allows users to turn the system on and off.

## Components

- **Arduino Uno (x2)**
- **LEDs (x6)**
- **150-ohm resistors (x6)**
- **Push buttons (x6)**
- **Buzzer (x1)**
- **Switch (x1)**
- **Jumper wires**
- **Breadboard**

## Wiring Diagram

### LEDs:

- **LED 1:**
  - Short side → 150 ohm resistor → Ground
  - Long side → Pin 3
- **LED 2:**
  - Short side → 150 ohm resistor → Ground
  - Long side → Pin 4
- **LED 3:**
  - Short side → 150 ohm resistor → Ground
  - Long side → Pin 5
- **LED 4:**
  - Short side → 150 ohm resistor → Ground
  - Long side → Pin 6
- **LED 5:**
  - Short side → 150 ohm resistor → Ground
  - Long side → Pin 7
- **LED 6:**
  - Short side → 150 ohm resistor → Ground
  - Long side → Pin 8

### Buttons:

- **Button 1:**
  - One side → A0
  - Other side → Ground
- **Button 2:**
  - One side → A1
  - Other side → Ground
- **Button 3:**
  - One side → A2
  - Other side → Ground
- **Button 4:**
  - One side → A3
  - Other side → Ground
- **Button 5:**
  - One side → A4
  - Other side → Ground
- **Button 6:**
  - One side → A5
  - Other side → Ground

### Switch:

- One side → Pin 10
- Other side → Ground

### Buzzer:

- Positive (+) → Pin 12
- Negative (-) → Ground

## Functionality

1. Pressing a button lights up the corresponding LED and plays the assigned note on the buzzer.
2. The system only works when the switch is turned on.
3. The buzzer produces musical notes corresponding to button presses, helping users learn and practice songs.

## Usage Instructions

1. Power on the Arduino Uno.
2. Turn on the switch to activate the system.
3. Press buttons to play corresponding notes while observing LED feedback.
4. Use the buzzer sound to guide learning and practicing songs.

## Light Sequence

The light sequence is controlled by a separate Arduino that handles the LEDs. To set up the light sequence, upload the **lightsequence.ino** file to the Arduino that is connected to the LEDs. This will control the lighting of the LEDs in sync with the button presses.

## Code Upload Instructions

- **lightsequence.ino**: This file should be uploaded to the Arduino connected to the LEDs and handles the light sequence in response to button presses.
- **piano.ino**: This file should be uploaded to the Arduino connected to the buttons, buzzer, and switch. It controls the musical notes and the interaction with the user.

## `pianoopenai.py` Functionality

The `pianoopenai.py` script allows users to create and manage custom light sequences for songs with OpenAI's API. Here's how it works:

1. **Start the Program**: The user is prompted to choose whether they want to play a previous song or create a new one.
   
2. **Create a New Song**: 
   - If the user selects "new," they can enter the song name, and OpenAI will generate a light sequence for that song.
   - The light sequence is then sent to the Arduino controlling the LEDs, which will light up in sync with the song.

3. **Replay the Sequence**:
   - After sending the sequence to the Arduino, the user can replay the sequence as many times as they want.

4. **Save the Song**:
   - If the user wants to save the song, the light sequence is written to a `.txt` file with the song name.
   
5. **Play a Previous Song**:
   - If the user selects "previous," they can input the name of the saved `.txt` file, and the script will load and play the corresponding light sequence.

6. **File Operations**:
   - The program supports saving light sequences to text files and loading them when the user wants to play a previous song.

## Future Improvements

- Implement an OLED display to show notes being played.
- Expand to support more complex songs.
- Add MIDI output for digital piano connectivity.

## Created By: Natnael Tesfaye
