#include "Obstaculo.h"

void Obstaculo::iniciar(int DISTANCIA_OBSTACULO){
	
	//piscarLeds();
	
	bool paraDireita; // Se o robô está indo realmente pela direita.

	motores.parar(150); 
	motores.recuar(180);

	while (!sensor.maisDirViuPreto()){
		robo.acionarMotores(0,VEL_PADRAO * (-1));
	}

	/**** Verificar melhor lado para ir ****/

	if (sonar.viuObstaculo(3 * DISTANCIA_OBSTACULO)){  // Se é melhor ir para a direita
		pelaDireita = true;
		alinhar('R'); // Right - Direita
	} 
	else {	// Se é melhor ir para a esquerda

		while (!sensor.maisDirViuPreto()){
			robo.acionarMotores(0,VEL_PADRAO);
		}

		alinhar('L'); // Left - Esquerda
	}

	motores.parar(1000);

	motores.emFrente();
	delay(600);

	if(pelaDireita){
		for (int i=10; i!=0; --i){
			robo.acionarMotores((VEL_PADRAO * (i/100)),VEL_PADRAO)
			delay(200);	
		}
	} 
	else {
		for (int i=10; i!=0; --i){
			robo.acionarMotores(VEL_PADRAO,(VEL_PADRAO * (i/100)))
			delay(200);	
		}
	}
	
	motores.emFrente();
}

void Obstaculo::alinhar(char lado){
	switch (lado){
		case 'R':
			while(desalinhado()){
				robo.motores((VEL_PADRAO * 0.10) * (-1),VEL_PADRAO * (-1)); 
				/*  ^				^				^	 		^  
					Motor contrário recua com 10% de VEL_PADRAO.
				*/
			}
			break;
		case 'L':
			while(desalinhado()){
				robo.motores(VEL_PADRAO * (-1),(VEL_PADRAO * 0.10) * (-1)); 
				/*  ^				^				^	 		^  
					Motor contrário recua com 10% de VEL_PADRAO.
				*/
			}
			break;
	}
	
}

bool Obstaculo::desalinhado(){
	if (sensor.branco_branco_branco_branco()){
		return true;
	} else {
		return false;
	}
}