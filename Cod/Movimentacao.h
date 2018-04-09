#ifndef MOVIMENTACAO_H
#define MOVIMENTACAO_H

#include "Setup.h"

#define VELPADRAO 40 // Velocidade padrão.
//#define DISTANCIA 0 

class Movimentacao{
public:
	void emFrente(){robo.motores(VEL,VEL);}
	void virarEsquerda(){robo.motores(VEL*(-1), VEL);}
	void virarDireita(){robo.motores(VEL,VEL*(-1));}
	void alinhar(int sensor);
	void parar(int tempo);
	void recuar(int tempo);
};

//static Movimentacao motores;

#endif