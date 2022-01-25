#define BLYNK_PRINT SwSerial
#include <SoftwareSerial.h>
SoftwareSerial SwSerial(10, 11);
#include <BlynkSimpleStream.h>
char auth[]="wnHMlNNoYKzf-JugEWsjFVXv_HWat79T";
//char ssid[]="Fibertel WiFi486 5.8GHz";
//char pass[]="00429608425";
void setup()
{
SwSerial.begin(9600);

  Serial.begin(9600);
  Blynk.begin(Serial, auth);
  
  }
  void loop()
  {Blynk.run();
  delay(1000);
    }
