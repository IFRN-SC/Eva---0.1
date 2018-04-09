#include "Setup.h"

void Setup::leds(bool value){
	if (value){
		leds.pinar(); // Define as pinagens para os LED'S.
	}
}
void Setup::calibrar(bool value){
	if (value){
		calibrar.run(); // Entra no modo de Calibração.
	}	
}