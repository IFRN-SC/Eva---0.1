#include "Calibracao.h"

void Calibracao::iniciar(){
	menuCalibracao();
}

void Calibracao::menuCalibracao(){
	Serial.println("(MENU CALIBRACAO)");
	Serial.println("");
	Serial.println("O que você quer calibrar?");
	Serial.println("");
	Serial.println("[1] Branco");
	esperarParaLer();
	escolha = Serial.read();

	switch (escolha) {
		case 1:
			calibrarBranco();
			break;
		default:
		 	menuCalibracao();
	}
}

void Calibracao::esperarParaLer(){
	while(!Serial.avaible()){}
}