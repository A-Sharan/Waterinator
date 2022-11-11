//Created by A. Sharan
int sensorPin = A0; 
int sensorValue;  

void setup() {
 Serial.begin(9600);
 pinMode(2,1); //motor driver l298n
 pinMode(3,1); // motor driver l298n

 
}

void loop() {


 sensorValue = analogRead(sensorPin); 
 Serial.println("Analog Value : ");
 Serial.println(sensorValue);
 
 if (sensorValue < 580 && sensorValue >= 360)) // change the value according to the type of the plant
 {
 digitalWrite(2,1); // motor
 digitalWrite(3,0); //motor
 delay(5000);
 }
 else {

 digitalWrite(2,0); // motor
 digitalWrite(3,0); //motor
 delay(600000); 
 
 }
 
delay(100); 
}
//Created by A. Sharan
