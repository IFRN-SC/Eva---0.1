#include "Estrategia.h"

Estrategia estrategia;

void setup(){
	Serial.begin(9600);
	robo.configurar(false);
	estrategia.calibrar(false);
}

void loop(){
	estrategia.iniciar();
}
