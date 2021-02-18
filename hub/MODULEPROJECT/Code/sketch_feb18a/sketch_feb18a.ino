const int LEDTEST = 0;
const int DCMOTOR = 9;


void setup() {
  // put your setup code here, to run once:

  pinMode(LEDTEST,OUTPUT);
  pinMode(DCMOTOR,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(DCMOTOR,HIGH);

  digitalWrite(LEDTEST,HIGH);

  delay(500);

  digitalWrite(LEDTEST,LOW);

  delay(500);

  



}
