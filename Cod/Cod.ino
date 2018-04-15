#include "Setup.h"
#include "Estrategia.h"


Estrategia estrategia;
Motores motores;

void setup(){
	Serial.begin(9600);
	robo.configurar(false);
	estrategia.calibrar(false);
	estrategia.setVelocidade(40);
	estrategia.distanciaObstaculo(10); 
}

void loop(){
	estrategia.iniciar();
}
