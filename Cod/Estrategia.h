#ifndef ESTRATEGIA_H
#define ESTRATEGIA_H

#include "Setup.h"

#define DISTANCIA_OBSTACULO 10.0

class Estrategia {
public:
	void iniciar();
private:
	void seguirLinha();
	void curvas();
	void viuObstaculo();
};

static Estrategia estrategia;

#endif