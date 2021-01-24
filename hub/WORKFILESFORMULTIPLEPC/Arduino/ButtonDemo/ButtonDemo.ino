const int Button = 3;
const int LED = 4;

boolean ButtonState;

void setup() {
  // put your setup code here, to run once:

  pinMode(LED,OUTPUT);
  pinMode(Button,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  ButtonState = digitalRead(Button);
  digitalWrite(LED,!ButtonState);

}
