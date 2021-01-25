#include <SoftwareSerial.h>
#define rx 2
#define tx 1

SoftwareSerial port(rx,tx);
const int Button = 3;
const int LED = 4;

boolean ledState=false;  // led off

void setup() {
  // put your setup code here, to run once:

  pinMode(LED,OUTPUT);
  pinMode(Button,INPUT);
  port.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if ((digitalRead(Button) == LOW) && (ledState == false)){  // button pressed
    delay(20);  // debounce
    while (digitalRead(Button) == LOW); // wait for release
    delay(20);  // debounce
    digitalWrite(LED, HIGH);
    ledState = true;   // led on
    port.println("LED ON");
  }
  else if ((digitalRead(Button == LOW)) && (ledState == true)){
    delay(20);
    while (digitalRead(Button) == LOW);
    delay(20);
    digitalWrite(LED, LOW);
    ledState == false;  // led off
    port.println("LED OFF");
  }
}
