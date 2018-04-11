#ifndef MOTORES_H
#define MOTORES_H

#include "Setup.h"

static int VEL_PADRAO;

class Motores {
public:
	/**** Funções de movimentação básica ****/
	
	void emFrente() { robo.acionarMotores(VEL_PADRAO,VEL_PADRAO); }
	void virarEsquerda() { robo.acionarMotores(VEL_PADRAO *(-1), VEL_PADRAO); }
	void virarDireita() { robo.acionarMotores(VEL_PADRAO,VEL_PADRAO *(-1)); }

	void parar(int tempo) {
		robo.acionarMotores(0,0); 
		delay(tempo);
	}
	void recuar(int tempo) {
		robo.acionarMotores(VEL_PADRAO * (-1),VEL_PADRAO * (-1));
		delay(tempo);
	}

	/*------------------------------------------------------------------------*/

	void setVelPadrao(int VEL_SET) { VEL_PADRAO = VET_SET; } 
	/*         ^                  ^                  ^         
		Essa função foi criada para a facilitação da determinação
		da velocidade padrão.
	*/

	/*------------------------------------------------------------------------*/
};

#endif
