#include "Obstaculo.h"

void Obstaculo::run(float DISTANCIA_OBSTACULO){
	//piscarLeds();
	bool paraDireita;

	motores.parar(150); 
	motores.recuar(180);

	while (!sensor.dir2_Preto()){
		motores.direita();
	}

	/**** Verificar melhor lado para ir ****/

	if (robo.lerSensorSonarFrontal() >= (3 * DISTANCIA_OBSTACULO)){  // Se é melhor ir para a direita
		pelaDireita = true;
		alinhar('R'); // Left
	} 
	else {	// Se é melhor ir para a esquerda

		while (!sensor.esq2_Preto()){
			motores.esquerda();
		}

		alinhar('L'); // Right
	}

	//motores.parar(1000);

	motores.emFrente();
	delay(600);

	if(pelaDireita){
		robo.acionarMotores(10,30)
		delay(600);
	} else {
		motores.direita();
		delay(600);
	}
	

	motores.parar(1000);

	motores.emFrente();
	delay(1490);

	motores.parar(1000);

	if(pelaDireita){
		motores.esquerda();
		delay(620);
	} else {
		motores.direita();
		delay(620);
	}

	while (sensor.dir_Branco() && sensor.esq_Branco()){
		motores.emFrente();
	}

	if(pelaDireita){
		motores.direita();
		delay(50);
	} else {
		motores.esquerda();
		delay(50)
	}
}

void Obstaculo::alinhar(char lado){
	switch (lado){
		case 'R':
			while(desalinhado()){
				robo.motores(-10,-40);
			}
			break;
		case 'L':
			while(desalinhado()){
				robo.motores(-40,-10);
			}
			break;
	}
	
}

bool Obstaculo::desalinhado(){
	if (sensor.B_B_B_B()){
		return true;
	} else {
		return false;
	}
}