/**************************************************************
PRÁCTICA Nº.16:
Realización de porta lóxica con tres pulsadores mediante código 
en C/C++.
Mediante código prenderemos unha bombilla usanco un conmutador de
4 entradas de tipo STDP.
Requisito de usar comando "else if (elif en Python)".
Xan Pérez Iglesias
14/01/2025   10:15 A.M.
**************************************************************/

//Función a cumplir (Simplificada)
//f == not a * b + a * c

#define A     10
#define B      9
#define C      8
#define LAMP  11

int a = 0;
int b = 0;
int c = 0;
char condicion;

void setup(){
  pinMode(A, INPUT);
  pinMode(B, INPUT);
  pinMode(C, INPUT);
  pinMode(LAMP, OUTPUT);     
}

void loop(){
  a = digitalRead(A);
  b = digitalRead(B);
  c = digitalRead(C);
  if(!a && b && !c ){
     digitalWrite(LAMP, HIGH);
  }  else if (!a && b && c) {
     digitalWrite(LAMP, HIGH);
  }  else if (a && !b && c) {
     digitalWrite(LAMP, HIGH);
  }  else if (a && b && c) {
     digitalWrite(LAMP, HIGH);
  }  else {
     digitalWrite(LAMP, LOW);
  }
 
}
