#ifndef OBSTACULO_H
#define OBSTACULO_H

#include "Setup.h"

static const int DISTANCIA_OBSTACULO;

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

	Movimentacao motores;

	void alinhar(float DISTANCIA_SET);
	bool desalinhado();
};

//static Obstaculo obstaculo;

#endif