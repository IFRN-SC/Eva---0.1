#ifndef OBSTACULO_H
#define OBSTACULO_H

//#include "Setup.h"
#include <robo_hardware.h>
#include "Motores.h"
#include "Sensores.h"
#include "Sonares.h"

static int DISTANCIA_OBSTACULO;

class Obstaculo {
public:

	void iniciar(int DISTANCIA_OBSTACULO);
	void setDistancia(int DISTANCIA_SET) {	  
		DISTANCIA_OBSTACULO = DISTANCIA_SET;
		/* ^             ^              ^
			A partir de qual DISTANCIA_OBSTACULO devo
		  	começar a desviar?
		*/
	}

private:

	Motores motores;
	Sonares sonar;

	void alinhar(char lado);
	bool desalinhado();
};

#endif