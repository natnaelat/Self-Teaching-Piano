const int Switch = 03;
const int A = 04;
const int B = 05;
const int C = 06;
const int D = 07;
const int E = 11;
const int F = 9;
const int Buzz = 12;
const int LED = 13;

void   setup()
{
  pinMode(LED, OUTPUT);
  pinMode(A, INPUT);
  digitalWrite(A,HIGH);
  pinMode(B, INPUT);
  digitalWrite(B,HIGH);
  pinMode(C, INPUT);
  digitalWrite(C,HIGH);
  pinMode(D, INPUT);
  digitalWrite(D,HIGH);
  pinMode(E, INPUT);
  digitalWrite(E,HIGH);
  pinMode(F, INPUT);
  digitalWrite(F,HIGH);
  pinMode(Switch, INPUT);
  digitalWrite(Switch, HIGH);
  tone(Buzz,0);

  Serial.begin(9600);
}

void loop()
{
  if(digitalRead(Switch) == LOW)
  {
    digitalWrite(LED, HIGH);
    int sensorValue = analogRead(A0);
    Serial.println(sensorValue);
    noTone(Buzz);
    delay(1);
    while(digitalRead(A) == LOW)
    {
      tone(Buzz,sensorValue+400);
    }
    while(digitalRead(B) == LOW)
    {
      tone(Buzz,sensorValue+350);
    }
    while(digitalRead(C) == LOW)
    {
      tone(Buzz,sensorValue+285);
    }
    while(digitalRead(D) == LOW)
    {
      tone(Buzz,sensorValue+250);
    }
    while(digitalRead(E) == LOW)
    {
      tone(Buzz,sensorValue+200);
    }
    while(digitalRead(F) == LOW)
    {
      tone(Buzz,sensorValue+150);
    }
  }
  noTone(Buzz);
  digitalWrite(LED, LOW);
}