// Project          : MOTOR TEST USING L293D DUAL H BRIDGE
// Version          : BETA v0.8
// Author           : Batuhan Gayretli
// Commencement Date: 08.06.2014
// Last Update      : 24.08.2014

const int Motor1Pin1 = 8;
const int Motor1Pin2 = 9;
const int Motor2Pin1 = 7;
const int Motor2Pin2 = 6;

int count;

void setup() {  
  count = 0;  
  pinMode(Motor1Pin1, OUTPUT);   
  pinMode(Motor1Pin2, OUTPUT);   
  pinMode(Motor2Pin1, OUTPUT);   
  pinMode(Motor2Pin2, OUTPUT);
  delay(5000);
  Serial.begin(9600);
}


void loop() {
  Serial.print("MOVE: " + count);
  
  GoForward();
  Serial.println("Advancing");
  delay(2000);
  Stop();
  Serial.println("Waiting");
  delay(2000);
  
  GoBackward();
  Serial.println("Going Back");
  delay(2000);
  Stop();
  Serial.println("Waiting");
  delay(2000);
  
  GoForward();
  Serial.println("Advancing");
  delay(2000);
  Stop();
  Serial.println("Waiting");
  delay(2000);
  
  GoRight();
  Serial.println("Turning Right");
  delay(2000);
  Stop();
  Serial.println("Waiting");
  delay(2000);
  
  GoLeft();
  Serial.println("Turning Left");
  delay(2000);
  Stop();
  Serial.println("Waiting");
  delay(2000);
  
  count++;  
}

void GoForward(){
  digitalWrite(Motor1Pin2, LOW);
  digitalWrite(Motor1Pin1, HIGH);
  digitalWrite(Motor2Pin2, LOW);
  digitalWrite(Motor2Pin1, HIGH);
}

void GoBackward(){
  digitalWrite(Motor1Pin1, LOW);
  digitalWrite(Motor1Pin2, HIGH);
  digitalWrite(Motor2Pin1, LOW);
  digitalWrite(Motor2Pin2, HIGH);
}

void GoLeft(){
  digitalWrite(Motor1Pin1, LOW);
  digitalWrite(Motor1Pin2, HIGH);
  digitalWrite(Motor2Pin2, LOW);
  digitalWrite(Motor2Pin1, HIGH);
}

void GoRight(){
  digitalWrite(Motor1Pin2, LOW);
  digitalWrite(Motor1Pin1, HIGH);
  digitalWrite(Motor2Pin1, LOW);
  digitalWrite(Motor2Pin2, HIGH);
}

void Stop(){
  digitalWrite(Motor1Pin2, LOW);
  digitalWrite(Motor1Pin1, LOW);
  digitalWrite(Motor2Pin1, LOW);
  digitalWrite(Motor2Pin2, LOW);
}
