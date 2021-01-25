import processing.serial.*;

Serial myPort;

int val;

void setup(){
  
  
  //myPort = new Serial(this, Serial.list ()[1],9600);
  size (500,500);
 
 
  printArray(Serial.list());
  String portName = Serial.list()[1];
  myPort = new Serial(this, portName, 9600);
  
}


void draw(){
  
  
  println(val);
  if( myPort.available() > 0){
   val = myPort.read(); 
   
   if(val == 48){
   fill(0);
   println("0");
  }
  else if(val == 49){
   fill(255,0,0);  
   println("1");
  }
  
  }
   
  
  
  rect(50,50,100,100);
  
  
}

/*
void serialEvent(Serial myPort){

  inByte = myPort 
  
}

*/
