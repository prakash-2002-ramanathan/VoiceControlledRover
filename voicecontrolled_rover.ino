//The Code Is Written By MaiTi Tech 
//YouTube Channel Link:- https://www.youtube.com/MaiTiTech
#include <SoftwareSerial.h>
SoftwareSerial BT(10, 11); //TX, RX 
String readvoice;
int RMF = 3; // IN1
int RMB = 4; //  IN2
int LMF = 5; // IN3
int LMB = 6; // IN4
void setup() {
 Serial.begin(9600);
 BT.begin(9600);
  pinMode (RMF, OUTPUT); 
  pinMode (RMB, OUTPUT);
  pinMode (LMF, OUTPUT);
  pinMode (LMB, OUTPUT);
}void loop() {
  if (Serial.available()){ 
  Serial.println("AVAILABLE"); 
  readvoice = Serial.readString(); 
  delay(10);
  } 
  if (readvoice.length() > 0) {
    Serial.println(readvoice);
    Serial.println(readvoice);
    Serial.println("length is printed");
  if(readvoice == "forward")
  {
    Serial.println("Success");
    digitalWrite(RMF, HIGH);
    digitalWrite (LMF, HIGH);
    digitalWrite(RMB,LOW);
    digitalWrite(LMB,LOW);
    delay(100); }
else if(readvoice == "back")
  { digitalWrite(RMF, LOW);
    digitalWrite(LMF, LOW);
    digitalWrite(RMB, HIGH);
    digitalWrite(LMB,HIGH);
    delay(100); }
 else if (readvoice == "left")
  { digitalWrite (RMF,HIGH);
    digitalWrite (LMF,LOW);
    digitalWrite (RMB,LOW);
    digitalWrite (LMB,LOW);
   delay (100);}
 else if ( readvoice == "right")
 {digitalWrite (RMF, LOW);
   digitalWrite (LMF, HIGH);
   digitalWrite (RMB, LOW);
   digitalWrite (LMB, LOW);
   delay (100);}
 else if (readvoice == "stop")
 {digitalWrite (RMF, LOW);
   digitalWrite (LMF, LOW);
   digitalWrite (RMB, LOW);
   digitalWrite (LMB, LOW);
   delay (100);}
   else if (readvoice == "off"){ digitalWrite (RMF, LOW);
   digitalWrite (LMF, LOW);
   digitalWrite (RMB, LOW);
   digitalWrite (LMB, LOW);
   delay (100);}
readvoice="";}}
