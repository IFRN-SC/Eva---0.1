#ifndef OBSTACULO_H
#define OBSTACULO_H

#include "Setup.h"

class Obstaculo {
public:
	void run();
private:

	Movimentacao motores;

	void alinhar(float DISTANCIA_OBSTACULO);
	bool desalinhado();
};

static Obstaculo obstaculo;

#endif