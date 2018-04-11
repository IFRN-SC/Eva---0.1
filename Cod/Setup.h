#ifndef SETUP_H
#define SETUP_H

/**** Sobre:
	 
	A classe Setup foi feita para organizar e simplificar a utilização
	mútua das classes. Supre a necessidade de setar algum valor ou até mesmo
	alguma função indo até a classe respectiva.

	Quando incluímos "Setup.h" em outra classe, é possível criar objetos de outras
	classes sem a necessidade de inclusão - previnindo confusões/duplicações.

****/

#include <robo_hardware.h>

//#include "Calibracao.h"
#include "Estrategia.h"
#include "Sensores.h"
#include "Sonares.h"
#include "Movimentacao.h"
#include "Leds.h"


class Setup{
public: 

	void leds(bool value) { // Define a pinagem para os LEDs.
		if (value) 
		leds.pinar(); 
	} 
	void calibrar(bool value) { // Entra no modo de Calibração.
		if (value)
		calibrar.iniciar(); 
	} 
	
	void motoresVelPadrao(int VEL_SET) { // Seta o VELPADRAO em "Motores.h".
		motores.setVelPadrao(VEL_SET); 
	} 	
	void distanciaObstaculo(int DISTANCIA_SET) { // Seta DISTANCIA_OBSTACULO em ...
		obstaculo.setDistancia(DISTANCIA_SET);   // ... "Obstaculo.h".
	}

private:

	Leds leds;
	//Calibrar calibrar;
	Motores motores;
	Obstaculo obstaculo;
};

#endif
