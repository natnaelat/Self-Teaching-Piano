const int LED1 = 3;   // D3
const int LED2 = 4;   // G3
const int LED3 = 5;   // C4
const int LED4 = 6;   // F4
const int LED5 = 7;   // B4
const int LED6 = 8;   // F6

void setup() {
  // Initialize all the LEDs as outputs
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);

  // Initialize serial communication
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    // Read the LED sequence from the serial input
    String ledSequence = Serial.readStringUntil('\n');
    
    // Split the sequence into individual numbers
    int numLEDs = ledSequence.length();
    for (int i = 0; i < numLEDs; i++) {
      int ledNumber = ledSequence.charAt(i) - '0';  // Convert character to integer

      // Turn off all LEDs before turning on the correct one
      digitalWrite(LED1, LOW);
      digitalWrite(LED2, LOW);
      digitalWrite(LED3, LOW);
      digitalWrite(LED4, LOW);
      digitalWrite(LED5, LOW);
      digitalWrite(LED6, LOW);

      // Light up the corresponding LED based on the received number
      switch (ledNumber) {
        case 1:
          digitalWrite(LED1, HIGH);
          break;
        case 2:
          digitalWrite(LED2, HIGH);
          break;
        case 3:
          digitalWrite(LED3, HIGH);
          break;
        case 4:
          digitalWrite(LED4, HIGH);
          break;
        case 5:
          digitalWrite(LED5, HIGH);
          break;
        case 6:
          digitalWrite(LED6, HIGH);
          break;
        default:
          // If the number is invalid, do nothing
          break;
      }

      delay(700);  // Keep the LED on briefly
      digitalWrite(LED1, LOW);
      digitalWrite(LED2, LOW);
      digitalWrite(LED3, LOW);
      digitalWrite(LED4, LOW);
      digitalWrite(LED5, LOW);
      digitalWrite(LED6, LOW);

      delay(300);  // Short delay before moving to the next signal
    }
  }
}
