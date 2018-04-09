#include "Setup.h"
#include "Estrategia.h"

Setup set;

void setup(){
	robo.configurar(false);
	set.leds(true);
	set.calibrar(true);
}

void loop(){
	estrategia.iniciar();
}
