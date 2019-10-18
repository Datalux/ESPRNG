#include "ESP8266TrueRandom.h"

void setup() {
  Serial.begin(115200);
  int Nv, Nf;
  int n, m;
  int i, j;
  n = 16;
  m = 5;

  int ii[16], jj[5];

  init_array(ii, n);
  init_array(jj, m);

  for(int c = 0; c < 100; c++){

    Serial.println();
    Serial.print("======== ");
    Serial.print(c);
    Serial.print(" ========");

    Nv = ESP8266TrueRandom.rand();
    Nf = ESP8266TrueRandom.rand();

  
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

    ii[i]++;
    jj[j]++;
    
}

  Serial.println();
  Serial.print("======== ");
  Serial.print("FINAL RESULTS");
  Serial.println(" ========");

  Serial.println("KEYS");
  Serial.println();
  print_array(ii, n);

  Serial.println();
  
  Serial.println("ALGORITHMS");
  Serial.println();
  print_array(jj, m);

}

void print_array(int *arr, int dim)
{
  for(int x = 0; x < dim; x++){
    Serial.print(x);
    Serial.print(" | ");
    Serial.println(arr[x]);
  }
}

void init_array(int *arr, int dim)
{
  for(int x = 0; x < dim; x++){
    arr[x] = 0;
  }
}

void loop(){
}
