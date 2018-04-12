#include "Setup.h"
#include "Estrategia.h"

Setup set;
Estrategia estrategia;

void setup(){
	Serial.begin(9600);
	robo.configurar(false);
	set.pinarLeds(false);
	set.calibrar(true);
	set.motoresVelPadrao(40);
	set.distanciaObstaculo(10);
}

void loop(){
	estrategia.iniciar();
}
