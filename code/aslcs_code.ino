#include <msp430.h>
#define threshold 250    //dark threshold (reading from LDR)
#define LED RED_LED
int main(){
  pinMode(LED,OUTPUT);
  pinMode(P1_4,OUTPUT);
  while(1){
    if(analogRead(P1_0)<threshold){   //if Night
      digitalWrite(P1_4,HIGH);    //LED ON (street light on)
      digitalWrite(LED,HIGH);
    }
    else{
      digitalWrite(P1_4,LOW);     //LED OFF
      digitalWrite(LED,LOW);
    }
  }
  return 0;
}
