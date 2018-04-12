#define SETUP_H

/**** Sobre:
	 
	Supre a necessidade de setar algum valor ou até mesmo
	alguma função indo até a classe respectiva.

****/

//#include <robo_hardware.h>

//#include "Calibracao.h"


//#include "Estrategia.h"
//#include "Sensores.h"
//#include "Sonares.h"
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
		/*if (value)
		calibrar.iniciar();*/ 
	} 
	
	void motoresVelPadrao(int VEL_SET) { // Seta o VELPADRAO em "Motores.h".
		motores.setVelPadrao(VEL_SET); 
	} 	
	void distanciaObstaculo(int DISTANCIA_SET) { // Seta DISTANCIA_OBSTACULO em ...
		obstaculo.setDistancia(DISTANCIA_SET);   // ... "Obstaculo.h".
	}
	void separacaoBrancoPreto(int valor){
		sensor.setSeparacao(valor);
	}

private:

	//Sonares sonar;
	Leds leds;
	//Calibrar calibrar;
	Motores motores;
	Obstaculo obstaculo;
};
