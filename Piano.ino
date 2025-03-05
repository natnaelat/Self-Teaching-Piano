const int Switch = 10;
const int A = A5;
const int B = A4;
const int C = A3;
const int D = A2;
const int E = A1;
const int F = A0;
const int Buzz = 12;
const int LED = 13;

void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(A, INPUT);
  digitalWrite(A, HIGH);
  pinMode(B, INPUT);
  digitalWrite(B, HIGH);
  pinMode(C, INPUT);
  digitalWrite(C, HIGH);
  pinMode(D, INPUT);
  digitalWrite(D, HIGH);
  pinMode(E, INPUT);
  digitalWrite(E, HIGH);
  pinMode(F, INPUT);
  digitalWrite(F, HIGH);
  pinMode(Switch, INPUT);
  digitalWrite(Switch, HIGH);
  tone(Buzz, 0);

  Serial.begin(9600);
}

void loop()
{
  if (digitalRead(Switch) == LOW)
  {
    digitalWrite(LED, HIGH);
    int sensorValue = analogRead(A0);
    Serial.println(sensorValue);
    noTone(Buzz);
    delay(0.5);
    
    while (digitalRead(A) == LOW)
    {
      tone(Buzz, sensorValue - 500);
    }
    while (digitalRead(B) == LOW)
    {
      tone(Buzz, sensorValue - 400);
    }
    while (digitalRead(C) == LOW)
    {
      tone(Buzz, sensorValue - 365);
    }
    while (digitalRead(D) == LOW)
    {
      tone(Buzz, sensorValue - 328);
    }
    while (digitalRead(E) == LOW)
    {
      tone(Buzz, sensorValue - 265);
    }
    while (digitalRead(F) == LOW)
    {
      tone(Buzz, sensorValue - 269);
    }
  }
  noTone(Buzz);
  digitalWrite(LED, LOW);
}
