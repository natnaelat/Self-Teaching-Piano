int L1 = 4;
int L2 = 5;
int L3 = 7;
int L4 = 8;
int L5 = 9;
int L6 = 10;  //7 LED pin

int buttonPin = 11;  //the number of the pushbutton pin
int buttonState = 0;
int de=1000;  // delay time
int flag=0;

void setup() {
  

  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
  pinMode(L3, OUTPUT);
  pinMode(L4, OUTPUT);
  pinMode(L5, OUTPUT);
  pinMode(L6, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);

}

void loop() 
{
 buttonState = digitalRead(buttonPin);

 if (buttonState == LOW)
 {    
  if(flag == 0)
  {
  delay(4000);
 digitalWrite(L1,HIGH); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,LOW); 
 digitalWrite(L4,LOW); 
 digitalWrite(L5,LOW); 
 digitalWrite(L6,LOW); 
  delay(500);  

 digitalWrite(L1,LOW); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,LOW); 
 digitalWrite(L4,LOW); 
 digitalWrite(L5,LOW); 
 digitalWrite(L6,LOW); 
  delay(500); 

 digitalWrite(L1,HIGH); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,LOW); 
 digitalWrite(L4,LOW); 
 digitalWrite(L5,LOW); 
 digitalWrite(L6,LOW); 
  delay(de); 
  
 digitalWrite(L1,LOW); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,LOW); 
 digitalWrite(L4,LOW); 
 digitalWrite(L5,HIGH); 
 digitalWrite(L6,LOW); 
  delay(500); 

 digitalWrite(L1,LOW); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,LOW); 
 digitalWrite(L4,LOW); 
 digitalWrite(L5,LOW); 
 digitalWrite(L6,LOW); 
  delay(500); 

 digitalWrite(L1,LOW); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,LOW); 
 digitalWrite(L4,LOW); 
 digitalWrite(L5,HIGH); 
 digitalWrite(L6,LOW); 
  delay(de); 
  
 digitalWrite(L1,LOW); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,LOW); 
 digitalWrite(L4,LOW); 
 digitalWrite(L5,LOW); 
 digitalWrite(L6,HIGH); 
  delay(500); 

 digitalWrite(L1,LOW); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,LOW); 
 digitalWrite(L4,LOW); 
 digitalWrite(L5,LOW); 
 digitalWrite(L6,LOW); 
  delay(500);

 digitalWrite(L1,LOW); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,LOW); 
 digitalWrite(L4,LOW); 
 digitalWrite(L5,LOW); 
 digitalWrite(L6,HIGH); 
  delay(de); 
  
 digitalWrite(L1,LOW); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,LOW); 
 digitalWrite(L4,LOW); 
 digitalWrite(L5,HIGH); 
 digitalWrite(L6,LOW); 
  delay(de); 

 digitalWrite(L1,LOW); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,LOW); 
 digitalWrite(L4,HIGH); 
 digitalWrite(L5,LOW); 
 digitalWrite(L6,LOW); 
  delay(500); 

 digitalWrite(L1,LOW); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,LOW); 
 digitalWrite(L4,LOW); 
 digitalWrite(L5,LOW); 
 digitalWrite(L6,LOW); 
  delay(500);

 digitalWrite(L1,LOW); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,LOW); 
 digitalWrite(L4,HIGH); 
 digitalWrite(L5,LOW); 
 digitalWrite(L6,LOW); 
  delay(de); 

 digitalWrite(L1,LOW); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,HIGH); 
 digitalWrite(L4,LOW); 
 digitalWrite(L5,LOW); 
 digitalWrite(L6,LOW); 
  delay(500); 

 digitalWrite(L1,LOW); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,LOW); 
 digitalWrite(L4,LOW); 
 digitalWrite(L5,LOW); 
 digitalWrite(L6,LOW); 
  delay(500);

 digitalWrite(L1,LOW); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,HIGH); 
 digitalWrite(L4,LOW); 
 digitalWrite(L5,LOW); 
 digitalWrite(L6,LOW); 
  delay(de); 

 digitalWrite(L1,LOW); 
 digitalWrite(L2,HIGH); 
 digitalWrite(L3,LOW); 
 digitalWrite(L4,LOW); 
 digitalWrite(L5,LOW); 
 digitalWrite(L6,LOW); 
  delay(500); 

 digitalWrite(L1,LOW); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,LOW); 
 digitalWrite(L4,LOW); 
 digitalWrite(L5,LOW); 
 digitalWrite(L6,LOW); 
  delay(500);

 digitalWrite(L1,LOW); 
 digitalWrite(L2,HIGH); 
 digitalWrite(L3,LOW); 
 digitalWrite(L4,LOW); 
 digitalWrite(L5,LOW); 
 digitalWrite(L6,LOW); 
  delay(de); 

 digitalWrite(L1,HIGH); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,LOW); 
 digitalWrite(L4,LOW); 
 digitalWrite(L5,LOW); 
 digitalWrite(L6,LOW); 
  delay(de); 

 digitalWrite(L1,LOW); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,LOW); 
 digitalWrite(L4,LOW); 
 digitalWrite(L5,HIGH); 
 digitalWrite(L6,LOW); 
  delay(500); 

 digitalWrite(L1,LOW); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,LOW); 
 digitalWrite(L4,LOW); 
 digitalWrite(L5,LOW); 
 digitalWrite(L6,LOW); 
  delay(500);

 digitalWrite(L1,LOW); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,LOW); 
 digitalWrite(L4,LOW); 
 digitalWrite(L5,HIGH); 
 digitalWrite(L6,LOW); 
  delay(de); 

 digitalWrite(L1,LOW); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,LOW); 
 digitalWrite(L4,HIGH); 
 digitalWrite(L5,LOW); 
 digitalWrite(L6,LOW); 
  delay(500); 

 digitalWrite(L1,LOW); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,LOW); 
 digitalWrite(L4,LOW); 
 digitalWrite(L5,LOW); 
 digitalWrite(L6,LOW); 
  delay(500);

 digitalWrite(L1,LOW); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,LOW); 
 digitalWrite(L4,HIGH); 
 digitalWrite(L5,LOW); 
 digitalWrite(L6,LOW); 
  delay(de); 

 digitalWrite(L1,LOW); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,HIGH); 
 digitalWrite(L4,LOW); 
 digitalWrite(L5,LOW); 
 digitalWrite(L6,LOW); 
  delay(500); 

 digitalWrite(L1,LOW); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,LOW); 
 digitalWrite(L4,LOW); 
 digitalWrite(L5,LOW); 
 digitalWrite(L6,LOW); 
  delay(500);

 digitalWrite(L1,LOW); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,HIGH); 
 digitalWrite(L4,LOW); 
 digitalWrite(L5,LOW); 
 digitalWrite(L6,LOW); 
  delay(de); 

 digitalWrite(L1,LOW); 
 digitalWrite(L2,HIGH); 
 digitalWrite(L3,LOW); 
 digitalWrite(L4,LOW); 
 digitalWrite(L5,LOW); 
 digitalWrite(L6,LOW); 
  delay(de);

 digitalWrite(L1,LOW); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,LOW); 
 digitalWrite(L4,LOW); 
 digitalWrite(L5,HIGH); 
 digitalWrite(L6,LOW); 
  delay(500);

 digitalWrite(L1,LOW); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,LOW); 
 digitalWrite(L4,LOW); 
 digitalWrite(L5,LOW); 
 digitalWrite(L6,LOW); 
  delay(500);

 digitalWrite(L1,LOW); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,LOW); 
 digitalWrite(L4,LOW); 
 digitalWrite(L5,HIGH); 
 digitalWrite(L6,LOW); 
  delay(de);

 digitalWrite(L1,LOW); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,LOW); 
 digitalWrite(L4,HIGH); 
 digitalWrite(L5,LOW); 
 digitalWrite(L6,LOW); 
  delay(500);

 digitalWrite(L1,LOW); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,LOW); 
 digitalWrite(L4,LOW); 
 digitalWrite(L5,LOW); 
 digitalWrite(L6,LOW); 
  delay(500);

 digitalWrite(L1,LOW); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,LOW); 
 digitalWrite(L4,HIGH); 
 digitalWrite(L5,LOW); 
 digitalWrite(L6,LOW); 
  delay(de);

 digitalWrite(L1,LOW); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,HIGH); 
 digitalWrite(L4,LOW); 
 digitalWrite(L5,LOW); 
 digitalWrite(L6,LOW); 
  delay(500);

 digitalWrite(L1,LOW); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,LOW); 
 digitalWrite(L4,LOW); 
 digitalWrite(L5,LOW); 
 digitalWrite(L6,LOW); 
  delay(500);

 digitalWrite(L1,LOW); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,HIGH); 
 digitalWrite(L4,LOW); 
 digitalWrite(L5,LOW); 
 digitalWrite(L6,LOW); 
  delay(de);

 digitalWrite(L1,LOW); 
 digitalWrite(L2,HIGH); 
 digitalWrite(L3,LOW); 
 digitalWrite(L4,LOW); 
 digitalWrite(L5,LOW); 
 digitalWrite(L6,LOW); 
  delay(de);

 digitalWrite(L1,HIGH); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,LOW); 
 digitalWrite(L4,LOW); 
 digitalWrite(L5,LOW); 
 digitalWrite(L6,LOW); 
  delay(500);

 digitalWrite(L1,LOW); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,LOW); 
 digitalWrite(L4,LOW); 
 digitalWrite(L5,LOW); 
 digitalWrite(L6,LOW); 
  delay(500);

 digitalWrite(L1,HIGH); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,LOW); 
 digitalWrite(L4,LOW); 
 digitalWrite(L5,LOW); 
 digitalWrite(L6,LOW); 
  delay(de);

 digitalWrite(L1,LOW); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,LOW); 
 digitalWrite(L4,LOW); 
 digitalWrite(L5,HIGH); 
 digitalWrite(L6,LOW); 
  delay(500);

 digitalWrite(L1,LOW); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,LOW); 
 digitalWrite(L4,LOW); 
 digitalWrite(L5,LOW); 
 digitalWrite(L6,LOW); 
  delay(500);

 digitalWrite(L1,LOW); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,LOW); 
 digitalWrite(L4,LOW); 
 digitalWrite(L5,HIGH); 
 digitalWrite(L6,LOW); 
  delay(de);

 digitalWrite(L1,LOW); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,LOW); 
 digitalWrite(L4,LOW); 
 digitalWrite(L5,LOW); 
 digitalWrite(L6,HIGH); 
  delay(500);

 digitalWrite(L1,LOW); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,LOW); 
 digitalWrite(L4,LOW); 
 digitalWrite(L5,LOW); 
 digitalWrite(L6,LOW); 
  delay(500);

 digitalWrite(L1,LOW); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,LOW); 
 digitalWrite(L4,LOW); 
 digitalWrite(L5,LOW); 
 digitalWrite(L6,HIGH); 
  delay(de);

 digitalWrite(L1,LOW); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,LOW); 
 digitalWrite(L4,LOW); 
 digitalWrite(L5,HIGH); 
 digitalWrite(L6,LOW); 
  delay(de);

 digitalWrite(L1,LOW); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,LOW); 
 digitalWrite(L4,HIGH); 
 digitalWrite(L5,LOW); 
 digitalWrite(L6,LOW); 
  delay(500);

 digitalWrite(L1,LOW); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,LOW); 
 digitalWrite(L4,LOW); 
 digitalWrite(L5,LOW); 
 digitalWrite(L6,LOW); 
  delay(500);

 digitalWrite(L1,LOW); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,LOW); 
 digitalWrite(L4,HIGH); 
 digitalWrite(L5,LOW); 
 digitalWrite(L6,LOW); 
  delay(de);

 digitalWrite(L1,LOW); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,HIGH); 
 digitalWrite(L4,LOW); 
 digitalWrite(L5,LOW); 
 digitalWrite(L6,LOW); 
  delay(500);

 digitalWrite(L1,LOW); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,LOW); 
 digitalWrite(L4,LOW); 
 digitalWrite(L5,LOW); 
 digitalWrite(L6,LOW); 
  delay(500);

 digitalWrite(L1,LOW); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,HIGH); 
 digitalWrite(L4,LOW); 
 digitalWrite(L5,LOW); 
 digitalWrite(L6,LOW); 
  delay(de);

 digitalWrite(L1,LOW); 
 digitalWrite(L2,HIGH); 
 digitalWrite(L3,LOW); 
 digitalWrite(L4,LOW); 
 digitalWrite(L5,LOW); 
 digitalWrite(L6,LOW); 
  delay(500);

 digitalWrite(L1,LOW); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,LOW); 
 digitalWrite(L4,LOW); 
 digitalWrite(L5,LOW); 
 digitalWrite(L6,LOW); 
  delay(500);

 digitalWrite(L1,LOW); 
 digitalWrite(L2,HIGH); 
 digitalWrite(L3,LOW); 
 digitalWrite(L4,LOW); 
 digitalWrite(L5,LOW); 
 digitalWrite(L6,LOW); 
  delay(de);

 digitalWrite(L1,HIGH); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,LOW); 
 digitalWrite(L4,LOW); 
 digitalWrite(L5,LOW); 
 digitalWrite(L6,LOW); 
  delay(de);
flag=1;  
}
else if (flag=1){
 digitalWrite(L1,LOW); 
 digitalWrite(L2,LOW); 
 digitalWrite(L3,LOW); 
 digitalWrite(L4,LOW); 
 digitalWrite(L5,LOW); 
 digitalWrite(L6,LOW);
  flag=0;  
}
}
}