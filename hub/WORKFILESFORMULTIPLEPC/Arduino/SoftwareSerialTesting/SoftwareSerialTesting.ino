#include <SoftwareSerial.h>

SoftwareSerial MySerial(10,11)

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  if(MySerial.available()){
    Serial.write(MySerial.read();
  }

}
