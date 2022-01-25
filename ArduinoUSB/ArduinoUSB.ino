
#define BLYNK_PRINT SwSerial


#include <SoftwareSerial.h>
SoftwareSerial SwSerial(10, 11); // RX, TX

#include <BlynkSimpleStream.h>
char auth[] = "wnHMlNNoYKzf-JugEWsjFVXv_HWat79T";
const int pinAzul=13;
WidgetLED ledAzul(V2);
BlynkTimer timerLED;

void estadoLed() {
if (digitalRead(pinAzul)==HIGH)
{ledAzul.on();
 }

else{
  ledAzul.off();
}

}
void setup()
{
  SwSerial.begin(9600);
  Serial.begin(9600);
  Blynk.begin(Serial,auth);
 timerLED.setInterval(300L,estadoLed);
}


void loop()
{
  Blynk.run();
  timerLED.run();
}
