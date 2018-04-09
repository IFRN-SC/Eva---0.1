#include "Movimentacao.h"

void Movimentacao::parar(int tempo){
	robo.acionarMotores(0,0); 
	delay(tempo);
}

void Movimentacao::recuar(int tempo){
	robo.acionarMotores(VELPADRAO * (-1),VELPADRAO * (-1));
	delay(tempo);
}


void Movimentacao::alinhar(int sensor){
	switch (sensor){
		case 2: // 
			esquerda();
			break;
		case 3:
			direita();
			break;
	}
}

