#include <Arduino.h>
int hod;
int tlacitko;
int cas = 1000; 

void setup(){
pinMode(6, OUTPUT); //Dioda 1
pinMode(5, OUTPUT); //Dioda 2
pinMode(4, OUTPUT); //Dioda 3
pinMode(3, OUTPUT); //Dioda 4
pinMode(2, OUTPUT); //Dioda 5
pinMode(1, OUTPUT); //Dioda 6
pinMode(0, INPUT); //Tlacitko
}

void loop(){
digitalWrite (6, LOW); // Dioda 1
digitalWrite (5, LOW); // Dioda 2
digitalWrite (4, LOW); // Dioda 3
digitalWrite (3, LOW); // Dioda 4
digitalWrite (2, LOW); // Dioda 5
digitalWrite (1, LOW); // Dioda 6

tlacitko = digitalRead(0); 

if(tlacitko == HIGH){ 
hod = random(6)+1; //Nahodne cisla od 1 do 6


if(hod==1){ 
digitalWrite(6,HIGH);
delay(cas); 
}

if(hod==2){ 
digitalWrite(6,HIGH);
digitalWrite(5,HIGH);
delay(cas);
}

if(hod==3){
digitalWrite(6,HIGH);
digitalWrite(5,HIGH);
digitalWrite(4,HIGH);
delay(cas);
}

if(hod==4){
digitalWrite(6,HIGH);
digitalWrite(5,HIGH);
digitalWrite(4,HIGH);
digitalWrite(3,HIGH);
delay(cas);
}

if(hod==5){
digitalWrite(6,HIGH);
digitalWrite(5,HIGH);
digitalWrite(4,HIGH);
digitalWrite(3,HIGH);
digitalWrite(2,HIGH);
delay(cas);
}

if(hod==6){
digitalWrite(6,HIGH);
digitalWrite(5,HIGH);
digitalWrite(4,HIGH);
digitalWrite(3,HIGH);
digitalWrite(2,HIGH);
digitalWrite(1,HIGH);
delay(cas);
}
}
}