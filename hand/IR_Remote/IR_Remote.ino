#include <IRremote.h>


int RECV_PIN = 13;
IRrecv irrecv(RECV_PIN);
decode_results results;



void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.print("IR Reciever Button Decode");
irrecv.enableIRIn(); // Start the receiver
}

void loop() {
  // put your main code here, to run repeatedly:

if (irrecv.decode(&results)) {
    Serial.println(results.value, HEX);
    irrecv.resume(); // Receive the next value
  }
  delay(100);
}
