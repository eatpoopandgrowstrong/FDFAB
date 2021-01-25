#include <SoftwareSerial.h>

#define rx 2
#define tx 1

SoftwareSerial port(rx,tx);

const int PushButton = 3;
const int LED = 4;

int LEDState = 0;

void setup() {
  // put your setup code here, to run once:

  port.begin(9600);
  pinMode(PushButton , INPUT);
  pinMode(LED , OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  if((digitalRead(PushButton) == LOW) && (LEDState == 0)){

    delay(20);
    while(digitalRead(PushButton) == LOW);
    delay(20);

  LEDState = 1;
  digitalWrite(LED, HIGH);
  //port.println("1");
  port.print(1);
  }
  else if((digitalRead(PushButton) == LOW) && (LEDState == 1)){

    delay(20);
    while(digitalRead(PushButton) == LOW);
    delay(20);

  LEDState = 0;
  digitalWrite(LED, LOW);
  //port.println("0");
  port.print(0);
    
  }
  

}
