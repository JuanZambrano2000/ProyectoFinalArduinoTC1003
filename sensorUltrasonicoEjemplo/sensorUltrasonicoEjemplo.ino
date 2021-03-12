#include <OneWire.h>

//SensorUltrasonico
#define trigPin 9
#define echoPin 10
long duration;
long distance;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  //SensorUltrasonico
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  duration = pulseIn(echoPin,HIGH);
  distance = duration/58.2;
  Serial.println(distance);
  //Este codigo nos muestra la distancia al sensor en cm.
}
