#include "Calibracao.h"

Calibracao::Calibracao() {
	estiverCalibrando = true;
}

void Calibracao::iniciar(){
	menuCalibracao();
}

void Calibracao::menuCalibracao(){
	while (estiverCalibrando) {
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
			case 'S':
				estiverCalibranco = false;
		}
	}
}

void Calibracao::minimoBranco(){
	int resp = 0;
	while (resp != 0){
		Serial.println("CALIBRAR MINIMO BRANCO: ");
		Serial.println();
		Serial.println("POSICIONES OS SENSORES NO BRANCO!");
		Serial.println();
		Serial.println("INSIRA QUALQUER COISA PARA PEGAR VALORES");
		Serial.println("[0] SAIR");
		Serial.println();
		Serial.print("R = ");
		esperarParaLer();
		resp = Serial.read();
	}
}



void Calibracao::esperarParaLer(){
	while(!Serial.available()){}
}
