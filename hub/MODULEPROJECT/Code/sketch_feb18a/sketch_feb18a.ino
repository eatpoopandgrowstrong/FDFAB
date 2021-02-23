//#include <IRremote.h>
#include <Servo.h>

const int LEDTEST = 0;
const int DCMOTOR1 = 9;
const int DCMOTOR2 = 8;


const int IRpin = 7;

int Button1 = 0;

Servo Servo1;

void setup() {
  // put your setup code here, to run once:

  pinMode(LEDTEST,OUTPUT);
  pinMode(DCMOTOR,OUTPUT);
pinMode(DCMOTOR1,OUTPUT);
  Serial.begin(9600);
  //IrReceiver.begin(IRpin, ENABLE_LED_FEEDBACK); // Start the receiver, enable feed

  
  Servo1.attach(10);

}

void loop() {
  // put your main code here, to run repeatedly:

  Servo1.write(0);

  delay(1000);

  Servo1.write(90);

  delay(1000);

  

}




void Lights(){

  if(Button1 == 1){

    digitalWrite(LEDTEST ,HIGH);

    
  }
  
}
