#ifndef MOTORES_H
#define MOTORES_H

#include "Setup.h"

class Motores {
private: const int VELPADRAO;
public:
	/**** Funções de movimentação básica ****/
	
	void emFrente() { robo.acionarMotores(VELPADRAO,VELPADRAO); }
	void virarEsquerda() { robo.acionarMotores(VELPADRAO *(-1), VELPADRAO); }
	void virarDireita() { robo.acionarMotores(VELPADRAO,VELPADRAO *(-1)); }

	void parar(int tempo) {
		robo.acionarMotores(0,0); 
		delay(tempo);
	}
	void recuar(int tempo) {
		robo.acionarMotores(VELPADRAO * (-1),VELPADRAO * (-1));
		delay(tempo);
	}

	/*-------------------------------------*/

	void alinhar(String sensorViuPreto) {
		switch (sensor) {
			case "dir": // 
				virarEsquerda();
				break;
			case "esq":
				virarDireita();
				break;
		}
	}

	/*------------------------------------*/

	void Motores::setVelPadrao(int vel) { VELPADRAO = vel; } 
	/*         ^                  ^                  ^         
		Essa função foi criada para a facilitação da determinação
		da velocidade padrão.
	*/
};

//static Motores motores;

#endif
