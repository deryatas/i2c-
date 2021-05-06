#include <Wire.h>

int pot1;
int pot2;

byte dizi[2];


void setup()
{
  Wire.begin();
  
  Serial.begin(9600);
}

void loop()
{
    pot2 = analogRead(A2);
    pot2 = map(pot2, 1, 1023, 0, 180);
  	dizi[1] = pot2;
  
   	pot1 = analogRead(A3);
    pot1 = map(pot1, 1, 1023, 0, 180);
  	dizi[0] = pot1;	   

  	
 
  	Wire.beginTransmission(4);	 //hatı başlat
  	Wire.write(dizi, 2); //diger hatta veri yolla
  	Wire.endTransmission();  //hattı sonlandır
  	delay(500);
  	
  	//Serial.write(dizi, 2);
}