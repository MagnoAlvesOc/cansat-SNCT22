#include "thingProperties.h" // library arduino cloud
#include "DHT.h"
#include <Wire.h>
#include <Adafruit_BMP085.h>

#define DHTpin 2
#define DHTTYPE DHT11
DHT dht(DHTpin,DHTTYPE);

Adafruit_BMP085 bmp;

void setup() {
  // Initialize serial and wait for port to open:
  Serial.begin(9600);
  delay(1500);
  //BMP
  if (!bmp.begin()) {
	Serial.println("Sensor BMP180 não foi identificado");
	while (1) {}
  }

  // Defined in thingProperties.h
  initProperties();

  // Connect to Arduino IoT Cloud
  ArduinoCloud.begin(ArduinoIoTPreferredConnection);

  setDebugMessageLevel(2);
  ArduinoCloud.printDebugInfo();
}

void loop() {
  ArduinoCloud.update();
  dht_sensor_getdata();
  mpu_sensor_getdata();
  delay(5000);
}

void onUmidadeChange() {

}

void onChatChange() {
  
}
  void dht_sensor_getdata()
  {
    float hm= dht.readHumidity();
    Serial.print("Umidade ");
    Serial.println(hm);
    float temp=dht.readTemperature();
      Serial.print("Temperatura ");
    Serial.println(temp);
    umidade=hm;
    temperatura=temp;
    chat="Temperatura = " + String (temperatura)+ "°C | Umidade = " + String(umidade)+"%";
  }
  
  void mpu_sensor_getdata()
  {
   float pr= bmp.readPressure();
    Serial.print("Pressure = ");
    Serial.print(bmp.readPressure());
    Serial.println(" Pa");
    pressao=pr;
    // Calculate altitude assuming 'standard' barometric
    // pressure of 1013.25 millibar = 101325 Pascal
    float alt=bmp.readAltitude();
    Serial.print("Altitude = ");
    Serial.print(bmp.readAltitude());
    Serial.println(" Metros");
    altitude=alt;
    chat2="Pressão = " + String (pressao) + "Pa | Altitude = " + String (altitude) + "m";
  }

void onAltitudeChange()  {
    
}

void onChat2Change()  {
  
}

void onPressaoChange()  {
    
}

void onAccelerationXChange()  {
  
}

void onAccelerationYChange()  {
  
}

void onZChange()  {
  
}


void onAccelerationZChange()  {
  
}

void onAccXChange()  {
  
}


void onAccZChange()  {
  
}

void onAccYChange()  {
  
}

void onGyroXChange()  {
  
}


void onGyroYChange()  {
  
}

void onGyroZChange()  {
  
}

void onChat3Change()  {
  
}

void onMapsChange()  {
  
}