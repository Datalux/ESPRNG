#include "ESP8266TrueRandom.h"

void setup() {
  Serial.begin(115200);
  int Nv, Nf;
  int n, m;
  int i, j;

  Nv = ESP8266TrueRandom.rand();
  Nf = ESP8266TrueRandom.rand();

  n = 16;
  m = 5;

  Serial.println();
  
  Serial.print("Nv: ");
  Serial.println(Nv);

  Serial.print("Nf: ");
  Serial.println(Nf); 
  
  i = Nv % n;
  j = Nf % m;
  
  Serial.print("i: ");
  Serial.println(i); 

  Serial.print("j: ");
  Serial.println(j);  

  Serial.println("END");

  

}

void loop() {
}
