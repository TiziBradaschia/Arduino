void setup() {
pinMode(13,OUTPUT);// le explicamos que usamos el pin 13 como salida

}

void loop() {

for(int i=0;i<5;i++)
{
digitalWrite(13,HIGH);//prendido
delay(1000);//durante 1 egundos
digitalWrite(13,LOW);//apagado 
delay(1000);//durante 1 segundo
}
digitalWrite(13,LOW);
delay(5000);//espera 5 segundosy arranca nuevamente si no sale
exit(0);
}
