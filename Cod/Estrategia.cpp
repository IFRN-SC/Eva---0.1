#include "Estrategia.h"

void Estrategia::iniciar() {
	if (sonar.viuObstaculo(DISTANCIA_OBSTACULO)) {
		obstaculo.iniciar(DISTANCIA_OBSTACULO);
		/*
			A partir de qual DISTANCIA_OBSTACULO devo
		  	começar a desviar?
		*/
	} 
	else {
		seguirLinha();
	}
}

void Estrategia::seguirLinha() {
	if(sensores.dirViuPreto()) {
		motores.virarEsquerda();
	} 
	else if(sensores.esqViuPreto()) {
		motores.virarDireita();
	}
	else if(sensores.todosBrancos() ||
			sensores.todosPretos()
			)
	{
		motores.emFrente();
	}
	else {
		curvas();	
	}
}

void Estrategia::curvas() {
	switch (sensores.qualLadoVirar()) {
		case 'L': // Os 2 sensores esquerdos viram preto.
			motores.virarEsquerda();
		case 'R': // Os 2 sensores direitos viram preto. 
			motores.virarDireita();
		//default:
			//verde.iniciar();
	}
}
