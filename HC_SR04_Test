// Project          : HC-SR04 Test
// Version          : v1.0
// Author           : Batuhan Gayretli
// Commencement Date: 03.05.2014
// Last Update      : 04.06.2014
/*

PLUG:
VCC to Arduino 5V
GND to arduino GND
Echo to Arduino pin 7
Trig to Arduino pin 8

OPTIONAL:
Red POS to Arduino pin 11
Green POS to Arduino pin 10
560 ohm resistor to both LED NEG and GRD power rail

*/

#define USTrigger 8
#define USEcho 7

void setup() {
  Serial.begin (9600);
  pinMode(USTrigger, OUTPUT);
  pinMode(USEcho, INPUT);
}

void loop() {
  // Send
  long duration, distance;
  delayMicroseconds(2);
  digitalWrite(USTrigger, HIGH);  
  delayMicroseconds(5); 
  // Read
  digitalWrite(USTrigger, LOW);
  duration = pulseIn(USEcho, HIGH);
  distance = (duration/2) / 29.1;
  
  Serial.println(" Ultrasonic Pulse Received in"); 
  Serial.print(duration);
  Serial.println(" Microseconds");
  Serial.println(" The Distance is");
  Serial.print(distance);
  Serial.println(" cm");
  delay(1000); // In Miliseconds
}
