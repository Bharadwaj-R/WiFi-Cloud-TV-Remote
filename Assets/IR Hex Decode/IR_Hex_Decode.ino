#include <IRremote.hpp>

int rpin = 2;
IRrecv irrecv(rpin);
decode_results results;

//unsigned long key_value = 0;

void setup()
{
  irrecv.enableIRIn();
  irrecv.blink13(true);
  Serial.begin(9600);

  delay(2000);
  
  Serial.println("Decode the IR protocol used in your remote");
  Serial.println("Press any button on your remote");
}

void loop()
{
  if(irrecv.decode(&results))
  {
    Serial.println(results.value, HEX);
    switch (results.decode_type)
    {
       case NEC: Serial.println("NEC"); break ;
       case SONY: Serial.println("SONY"); break ;
       case RC5: Serial.println("RC5"); break ;
       case RC6: Serial.println("RC6"); break ;
       case DISH: Serial.println("DISH"); break ;
       case SHARP: Serial.println("SHARP"); break ;
       case JVC: Serial.println("JVC"); break ;
       case SAMSUNG: Serial.println("SAMSUNG"); break ;
       case LG: Serial.println("LG"); break ;
       case WHYNTER: Serial.println("WHYNTER"); break ;
       case PANASONIC: Serial.println("PANASONIC"); break ;
       case DENON: Serial.println("DENON"); break ;
       default:UNKNOWN: Serial.println("UNKNOWN"); break ;   
     }
     Serial.println();
     irrecv.resume();
  }
}
