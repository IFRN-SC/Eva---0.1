#include "Estrategia.h"

Estrategia estrategia;
/*
  Serão usadas funções deste objeto para
  a calibração e controle estratégico do robô no 
  void loop().
*/

void setup(){
	Serial.begin(9600);
	robo.configurar(false);
	estrategia.calibrar(false);
}

void loop(){
	estrategia.iniciar();
}
