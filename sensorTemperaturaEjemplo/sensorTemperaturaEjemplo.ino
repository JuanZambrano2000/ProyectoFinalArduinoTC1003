#include <DallasTemperature.h>

//SensorTemperatura
#define ONE_WIRE_BUS 8
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);
float Celsius = 0;
int pinLEDCalor = 11;
void setup() {
  // put your setup code here, to run once:
  sensors.begin();
  Serial.begin(9600);
  pinMode(pinLEDCalor, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  //SensorDeTemperatura
  sensors.requestTemperatures();
  Celsius = sensors.getTempCByIndex(0);
  Serial.print(Celsius);
  Serial.println("C");
  if(Celsius >= 28){
      digitalWrite(pinLEDCalor,HIGH);
    }else{
      digitalWrite(pinLEDCalor,LOW);
      }
  //Este codigo hace que cuando un la temperatura sea mayor a 28°C se encienda un led
}
