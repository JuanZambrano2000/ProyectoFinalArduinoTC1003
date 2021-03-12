//Fotoresistencia
int sensorPin = A0;
int sensorValue = 0;
int pinLEDLampara = 12;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pinLEDLampara, OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
 //Fotorresistencia
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue, DEC);
  if(sensorValue >= 880){
      digitalWrite(pinLEDLampara,HIGH);
      //Serial.println("PRENDIDO");
    }else{
      digitalWrite(pinLEDLampara,LOW);
      //Serial.println("APAGADO");
      }
  //delay(500);
	//Este programa nos dice el valor de la fotorresistencia y ademas si esta muy oscuro prende un led
}
