#include <Servo.h>
//servomotor
Servo servo0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  servo0.attach(7);
  //Angulo inicial del servo motor
  servo0.write(0);
}
void loop() {
  // put your main code here, to run repeatedly:
    servo0.write(90);
    delay(1000);
    servo0.write(0);
    delay(1000);
    //Este progama hace que el servo se abra a 90 y 0 grados cada segundo
}