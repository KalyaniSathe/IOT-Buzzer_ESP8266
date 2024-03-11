#include <cogcloudesp8266.h>

String ssid = "akconnect";
String pass = "Ramnagarnashik";

String apikey = "e54911974a8a9c2b4f44581c3de99923";

void setup ()
{
  pinMode(D7,OUTPUT);
  
  Serial.begin(9600);
  cogInitCloud (ssid,pass,apikey);
  //cogBindPin (D7,"BUZZER");
}

void loop ()
{

  cogAppLoop();
  int x = digitalRead(D2);
  cogStoreCloudVariable("PUSH",String(x));
  

  
  
}
