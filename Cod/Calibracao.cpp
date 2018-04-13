#include "Calibracao.h"


void Calibracao::iniciar(){
	menuCalibracao();
}

void Calibracao::menuCalibracao(){
	while (escolha == 'S') {
		Serial.println("[--+ MENU CALIBRACAO +--]");
		Serial.println();
		Serial.println("O QUE DESEJAS SENHOR?");
		Serial.println();
		Serial.println("[B] MINIMO BRANCO.");
		Serial.println("[P] MAXIMO PRETO.");
		Serial.println("[S] SAIR.");
		esperarParaLer();
		escolha = Serial.read();

		switch (escolha) {
			case 'B':
				minimoBranco();
				break;
			case 'P':
			 	maximoPreto();
			 	break;
			default:
				escolha = 'S';
		}
	}
}

void Calibracao::minimoBranco(){
	Serial.println("CALIBRAR MINIMO BRANCO: ");
	Serial.println();
	Serial.println("POSICIONES OS SENSORES NO BRANCO!");
	Serial.println();
	Serial.println("[1] PEGAR VALORES");
	Serial.println("[2] SAIR");
	Serial.println();
	Serial.print("R = ");
	esperarParaLer();
}



void Calibracao::esperarParaLer(){
	while(!Serial.available()){}
}
