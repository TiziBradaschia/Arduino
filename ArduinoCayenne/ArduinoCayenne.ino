/*No olvidar conexion DOS C:\Users\tizib\OneDrive\Documentos\Arduino\libraries\CayenneMQTT\extras\scripts>cayenne-ser.bat -c COM9*/

#include <CayenneMQTTSerial.h> 


/* Información de autenticación Cayenne. Esto debe obtenerse del Cayenne Dashboard. */
char username[] ="5b72fde0-94e0-11eb-883c-638d8ce4c23d" ; 
char password[] ="c2e610c377001753ead324f2c0ed4bdd88f35c1d" ;
char clienteID[] ="eaf613c0-94e1-11eb-b767-3f1a8f1211ba" ;
 int led;

void setup () { // La velocidad en baudios se puede especificar llamando a Cayenne.begin (nombre de usuario, contraseña, clientID, 9600); Cayena . comenzar ( nombre de usuario , contraseña , ID de cliente ); }
//Serial.begin(115200);//baudios por segundos
Cayenne.begin(username,password,clienteID);//tengo que poner el wifi?
pinMode(13,OUTPUT);
digitalWrite(13,LOW);
}
void loop()
{Cayenne.loop();

  } 
 

CAYENNE_OUT_DEFAULT () {}
CAYENNE_IN/*_DEFAULT*/ (0) { 
  led= getValue.asInt();//leemos lo que dice Cayenne
  digitalWrite(13,led);//si es 0 apaga si 1 prende
}
