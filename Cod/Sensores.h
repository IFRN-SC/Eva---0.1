#ifndef SENSORES_H
#define SENSORES_H

//#include "Setup.h"
#include <robo_hardware.h>

class Sensores {
public:
	
	char qualLadoVirar();

	bool maisEsqViuBranco(); 	// Sensor mais esquerdo Branco
	bool maisEsqViuPreto(); 	// Sensor mais esquerdo Preto
	bool esqViuBranco();      	// Sensor esquerdo Branco
	bool esqViuPreto();       	// Sensor esquerdo Preto
	bool dirViuBranco();      	// Sensor dreito Branco
	bool dirViuPreto();      	// Sensor direito Preto
	bool maisDirViuBranco(); 	// Sensor mais direito Branco
	bool maisDirViuPreto(); 	// Sensor mais direito Preto
	
	bool todosBrancos();
	bool todosPretos();
	
	void setSeparacao(int valor){
		Separacao_Branco_Preto = valor;
	}

private:

	bool branco_preto_branco_branco();
	bool branco_branco_preto_branco();
	bool preto_branco_branco_branco();
	bool branco_branco_branco_preto();

	bool preto_preto_branco_branco();
	bool branco_branco_preto_preto();
	bool branco_preto_preto_branco();
	bool preto_branco_branco_preto();
	bool preto_branco_preto_branco();
	bool branco_preto_branco_preto();

	bool preto_preto_preto_branco();
	bool branco_preto_preto_preto();
	bool preto_preto_branco_preto();
	bool preto_branco_preto_preto();
	
	int Separacao_Branco_Preto;
};

static Sensores sensores,sensor;

#endif