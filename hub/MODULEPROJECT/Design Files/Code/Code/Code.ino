void ButtonFunction();
void LEDFunction();
void MotorFunction();


const int GPIO1Button = 0;
const int GPIO2LED1 = 1;
const int GPIO3LED2 = 2;
const int GPIO4LED3 = 3;



const int DCMOTOR1 = 9;
const int DCMOTOR2 = 8;

int ButtonStatus = 0;


void setup() {
  // put your setup code here, to run once:

  pinMode(GPIO1Button, INPUT);
  pinMode(GPIO2LED1, OUTPUT);
  pinMode(GPIO3LED2, OUTPUT);
  pinMode(GPIO4LED3, OUTPUT);
  pinMode(DCMOTOR2, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  ButtonFunction();
  LEDFunction();
  MotorFunction();

}

void ButtonFunction(){

  if(digitalRead(GPIO1Button) == LOW){
    
    ButtonStatus+=1;
    
    if(ButtonStatus == 3){
      ButtonStatus = 0;
    }
    
  }
  while(digitalRead(GPIO1Button) == LOW);
  delay(10);
}

void LEDFunction(){

  switch(ButtonStatus){
    
  case(0):

    digitalWrite(GPIO2LED1,HIGH);
    digitalWrite(GPIO3LED2,LOW);
    digitalWrite(GPIO4LED3,LOW);
  
  break;

  case(1):

    digitalWrite(GPIO2LED1,LOW);
    digitalWrite(GPIO3LED2,HIGH);
    digitalWrite(GPIO4LED3,LOW);

  break;

  case(2):

    digitalWrite(GPIO2LED1,LOW);
    digitalWrite(GPIO3LED2,LOW);
    digitalWrite(GPIO4LED3,HIGH);

  break;
    
  }
}



void MotorFunction(){

  switch(ButtonStatus){

    case(0):    
      analogWrite(DCMOTOR2,0);
    break;

    case(1):
      analogWrite(DCMOTOR2,50);
    break;

    case(2):
      analogWrite(DCMOTOR2,127);
    break;
  }
  
}
