import processing.serial.*;

PImage ImageAlpha;
PImage ImageBravo;

Serial myPort;

int val;

void setup(){
  
  ImageAlpha = loadImage("lightbulboff.png");
  ImageBravo = loadImage("lightbulbon.png");
  
  
  //myPort = new Serial(this, Serial.list ()[1],9600);
  size (1280,780);
 image(ImageBravo, 0, 0);
 
  printArray(Serial.list());
  String portName = Serial.list()[1];
  myPort = new Serial(this, portName, 9600);
  
}


void draw(){
  
  
  println(val);
  if( myPort.available() > 0){
   val = myPort.read(); 
   
   if(val == 48){
   //fill(0);
   image(ImageAlpha, 0, 0);
   println("0");
  }
  else if(val == 49){
   //fill(255,0,0);  
   image(ImageBravo, 0, 0);
   println("1");
  }
  
  }
   
  
  
  //rect(50,50,100,100);
  
  
}

/*
void serialEvent(Serial myPort){

  inByte = myPort 
  
}

*/
