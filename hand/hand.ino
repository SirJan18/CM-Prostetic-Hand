#include <Servo.h>
#include <IRremote.h>



Servo finger1;
Servo finger2;
Servo finger3;
Servo finger4;
Servo finger5;
//IRremote reciever = 6; //IR Reciever Signal Connection
//IRrecv irrecv(reciever);
//decode_results results;
long randNum;




void setup() {
  Serial.begin(9600);
  // Attach Fingers to different plugs
  finger1.attach(9);
  finger2.attach(10);
  finger3.attach(11);
  finger4.attach(12);  
  finger5.attach(13);
  //irrecv.enableIRIn(); //Start IR Reciever
}

void loop() {

  
  

 

}

void numbergen() {
  randNum = random(0,2);
  Serial.print(randNum);

  //After Number Generation execute select void
  if(randNum = 0 ){ 
    rock();
  }

  if(randNum = 1 ){ 
    paper();
  }

  if(randNum = 2){  
    Sisscors();
  }
}

void rock() {

  finger1.write(90);
  finger2.write(90);
  finger3.write(90);
  finger4.write(90);
  finger5.write(90);

}

void paper() {
  finger1.write(45);
  finger2.write(45);
  finger3.write(45);
  finger4.write(45);
  finger5.write(45);
//Bend and rest to show action
  finger1.write(0);
  finger2.write(0);
  finger3.write(0);
  finger4.write(0);
  finger5.write(0);
  
}

void Sisscors() {

  finger3.write(90);
  finger4.write(90);
  finger5.write(90);
}
