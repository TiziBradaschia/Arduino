void setup() {
pinMode(13,OUTPUT);

}

void loop() {

for(int i=0;i<10;i++)
{
digitalWrite(13,HIGH);//prendido
delay(500);//durante 5 egundos
digitalWrite(13,LOW);//apagado 
delay(500);//durante 1 segundo
}
digitalWrite(13,LOW);
delay(5000);
exit(0);
}
