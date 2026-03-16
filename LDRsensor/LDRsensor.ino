#include <ArduinoJson.h>

StaticJsonDocument<128> doc;
char jsonOut[128];

int ldr_value = 0;  

void setup() {
  Serial.begin(9600);
  pinMode(D5, OUTPUT);
  pinMode(D6, OUTPUT);
  pinMode(D7, OUTPUT);
}

float Multiply(float a, float b) {
  float c = a * b;
  Serial.println("a * b = " + String(c));
  return c;
}

void CreateJSON() {
  doc.clear();  
  doc["key"] = "value";
  doc["key2"] = "value2";

  serializeJson(doc, jsonOut);
  Serial.println(jsonOut);  

  serializeJson(doc, Serial); 
  Serial.println();
}

void later() {
  Serial.print("ldr: ");
  Serial.println(ldr_value);
  delay(200);
}

void loop() {
  ldr_value = analogRead(A0);
  CreateJSON();
  later();
}
