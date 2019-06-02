#include <Servo.h>
#include <IRremote.h>



Servo finger1;
Servo finger2;
Servo finger3;
Servo finger4;
Servo finger5;
init reciever = 6; //IR Reciever Signal Connection
IRrecv irrecv(reciever);
decode_results results;



void setup() {
  // Attach Fingers to different plugs
  finger1.attach(9);
  finger2.attach(10);
  finger3.attach(11);
  finger4.attach(12);  
  finger5.attach(13);
  irrecv.enableIRIn(); //Start IR Reciever
}

void loop() {

 

}
