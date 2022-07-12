#include<Arduino.h>
#include<IRremote.hpp>

const int irrecvpin = 5;  //GPIO5 = D1

IRsend irsend;
decode_results results;

void setup()
{
  irsend.begin(irrecvpin);
  Serial.begin(115200);
  Serial.println("Start");
  pinMode(5, OUTPUT);
  int i;
  for(i=0; i<10; i++)
  {
    digitalWrite(5, HIGH);
    delay(200);
    digitalWrite(5, LOW);
    delay(200);
  }
  Serial.println("Start");  
}

void loop()
{
  irsend.sendNECRaw(0x11D98E71, 3);
  Serial.println("Sent Vol Up");
  delay(2000);
}
