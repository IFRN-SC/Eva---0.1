#include "Estrategia.h"

void Estrategia::run() {
 	/* !-- Se o sonar frontal retornar um valor menor ou igual
 		   ao valor de DISTANCIA_OBSTACULO, o robô começará
 		   a desviar do obstáculo.

 		   Se não, somente seguirá a linha.
 	*/
	if (sensores.sonarViuObstaculo(DISTANCIA_OBSTACULO))
		disviarObstaculo();
	else
		seguirLinha();
}

void Estrategia::calibrar(bool value) {
	if (value)
		calibracao.run();
}

void Estrategia::seguirLinha() {
	/* Se todos virem branco ou preto, motores avançam.
	*/	
	if (sensores.branco_branco_branco_branco()
	    || 
	    sensores.preto_preto_preto_preto()) 
	{
		motores.avancar();
	}
	else if (sensores.branco_preto_branco_branco()) {
		while (sensores.esqPreto()) {
			motores.virarDireita();	
		}
		motores.parar();
		delay(500);
		//passarVerde('L');
		impulso();
	}	
	else if (sensor.branco_branco_preto_branco()) {
		while(sensores.dirPreto()) {
			motores.virarEsquerda();	
		}
		motores.parar();
		delay(500);
		//passarVerde('R');
		impulso();
	}
	else if (sensor.preto_preto_branco_branco()){
		while(!sensores.branco_branco_branco_branco()){
			motores.virarDireita();
		}
		motores.parar();
		while(!sensores.preto_preto_branco_branco()){
			motores.virarDireita();
		}
		motores.parar();
		while(!sensore.branco_branco_branco_branco()) {
			motores.avancar();
		}
		motores.parar();
		impulso();
	}
	else if (sensor.branco_branco_preto_preto()){
		while(!sensores.branco_branco_branco_branco()){
			motores.virarEsquerda();
		}
		motores.parar();
		while(!sensores.branco_branco_preto_preto()){
			motores.virarEsquerda();
		}
		motores.parar();
		while(!sensore.branco_branco_branco_branco()) {
			motores.avancar();
		}
		motores.parar();
		impulso();
	}	
	/*
	else {
		motores.parar(500);
		while(1){
			motores.virarEsquerda();
			delay(500);
			motores.virarDireita();
			delay(500);
		}
	}
	
	else {
		passarVerde();	
	}
	*/
}

/*
void Estrategia::passarVerde(int lado) {
	switch (lado){
		case 'L': // Esquerda
			if (!sensores.branco_branco_branco_branco() &&
				!sensores.preto_preto_preto_preto()) 
			{
				while(!sensores.preto_preto_preto_preto()){
					motores.virarEixoEsq();
				}
			}
			break;
		case 'R':

	}
}
*/

void Estrategia::impulso() {
	while (sensores.branco_branco_branco_branco()
		  || 
		  sensores.preto_preto_preto_preto()
		  && 
		  (!sensores.sonarViuObstaculo(DISTANCIA_OBSTACULO))) 
	{
		robo.acionarMotores(60,60);	
	}
	motores.parar();
	delay(500);
	run();
}
