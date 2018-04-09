#include "Estrategia.h"

void Estrategia::run() {
	if (sonar.viuObstaculo(DISTANCIA_OBSTACULO)) {
		obstaculo.run(DISTANCIA_OBSTACULO); // Delay - (parar,recuar)
	} 
	else {
		seguirLinha();
	}
}

void Estrategia::seguirLinha() {
	if(sensores.B_Ṕ_B_P()) {
		motores.virarEsquerda();
	} 
	else if(sensores.B_B_P_B()) {
		motores.virarDireita();
	}
	else if(sensores.B_B_B_B() ||
			sensores.P_P_P_P()
			)
	{
		motores.emFrente();
	}
	else {
		curvas();	
	}
}

void Estrategia::curvas() {
	switch (sensores.ladoVirar()) {
		case 12: // Sensor 1, Sensor 2 = Dir2 e Dir.
			motores.virarEsquerda(); // Enrolar esquerda
		case 34:
			motores.virarDireita(); // Enrolar direita
	}
}
