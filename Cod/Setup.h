#define SETUP_H

/**** Sobre:
	 
	Supre a necessidade de setar algum valor ou até mesmo
	alguma função indo até a classe respectiva. Preguiça ^_^

****/

/*#include <robo_hardware.h>
#include "Estrategia.h"
#include "Sensores.h"
#include "Sonares.h"*/

#include "Calibracao.h"
#include "Motores.h"
#include "Obstaculo.h"
#include "Leds.h"
#include "Sensores.h"

class Setup{
public: 

	void pinarLeds(bool value) { // Define a pinagem para os LEDs.
		if (value) 
			leds.pinar(); 
	}
	void calibrar(bool value) { // Entra no modo de Calibração.
		if (value)
			calibracao.iniciar();
	}
	void motoresVelPadrao(int VEL_SET) { // Seta o VELPADRAO em "Motores.h".
		motores.setVelPadrao(VEL_SET); 
	} 	
	void distanciaObstaculo(int DISTANCIA_SET) { // Seta DISTANCIA_OBSTACULO em ...
		obstaculo.setDistancia(DISTANCIA_SET);   // ... "Obstaculo.h".
	}
	/*
	void separacaoBrancoPreto(int valor){
		sensores.setSeparacao(valor);
	}
	*/

private:

	Leds leds;
	Calibracao calibracao;
	Motores motores;
	Obstaculo obstaculo;
};
