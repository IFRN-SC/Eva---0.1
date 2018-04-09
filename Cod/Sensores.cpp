#include "Sensores.h"

int Sensores::centrais() {
	if (esq_Preto()){
		return 2; // Sensor esq viu preto.
	} 
	else if (dir_Preto()) {
		return 3; // Sensor dir viu preto.
	}
}

int Sensores::ladoVirar() {
	if(sensores.P_P_B_B()) {
		return 12;
	} 
	else if(sensores.B_B_P_P()) {
		return 34;
	}
}

bool Sensores::esq2_Branco(){
	if (robo.lerSensorLinhaEsq2() > refleEsq2.getSeparacao()) {
		return true;	
	} else {
		return false;
	}
}

bool Sensores::esq2_Preto(){
	if (robo.lerSensorLinhaEsq2() < refleEsq2.getSeparacao()) {
		return true;
	} else {
		return false;
	}
}

bool Sensores::esq_Branco(){
	if (robo.lerSensorLinhaEsq() > refleEsq.getSeparacao()) {
		return true;	
	} else {
		return false;
	}
}

bool Sensores::esq_Preto(){
	if (robo.lerSensorLinhaEsq() < refleEsq.getSeparacao()) {
		return true;	
	} else {
		return false;
	}
}

bool Sensores::dir_Branco(){
	if(robo.lerSensorLinhaDir() > refleDir.getSeparacao()){
		return true;
	} else {
		return false;
	}	
}

bool Sensores::dir_Preto(){
	if(robo.lerSensorLinhaDir() < refleDir.getSeparacao()){
		return true;
	} else {
		return false;
	}		
}

bool Sensores::dir2_Branco(){
	if(robo.lerSensorLinhaDir2() > refleDir2.getSeparacao()){
		return true;
	} else {
		return false;
	}	
}   

bool Sensores::dir2_Preto(){
	if(robo.lerSensorLinhaDir2() < refleDir2.getSeparacao()){
		return true;
	} else {
		return false;
	}
} 

/////////////////////////////////////////

bool Sensores::B_B_B_B(){
	return(
		esq2_Branco() &&
		esq_Branco() &&
		dir_Branco() &&
		dir2_Branco()
	);
}

bool Sensores::P_P_P_P(){
	return(
		esq2_Preto() &&
		esq_Preto() &&
		dir_Preto() &&
		dir2_Preto()
	);
}

bool Sensores::P_B_B_B(){
	return(
		esq2_Preto() &&
		esq_Branco() &&
		dir_Branco() &&
		dir2_Branco()
	);
}

bool Sensores::B_B_B_P(){
	return(
		esq2_Branco() &&
		esq_Branco() &&
		dir_Branco() &&
		dir2_Preto()
	);
}

bool Sensores::P_P_B_B(){
	return(
		esq2_Preto() &&
		esq_Preto() &&
		dir_Branco() &&
		dir2_Branco()
	);
}

bool Sensores::B_B_P_P(){
	return(
		esq2_Branco() &&
		esq_Branco() &&
		dir_Preto() &&
		dir2_Preto()
	);
}

bool Sensores::B_P_P_B(){
	return(
		esq2_Branco() &&
		esq_Preto() &&
		dir_Preto() &&
		dir2_Branco()
	);
}

bool Sensores::P_B_B_P(){
	return(
		esq2_Preto() &&
		esq_Branco() &&
		dir_Branco() &&
		dir2_Preto()
	);
}

bool Sensores::P_B_P_B(){
	return(
		esq2_Preto() &&
		esq_Branco() &&
		dir_Preto() &&
		dir2_Branco()
	);
}

bool Sensores::B_P_B_P(){
	return(
		esq2_Branco() &&
		esq_Preto() &&
		dir_Branco() &&
		dir2_Preto()
	);
}

bool Sensores::P_P_P_B(){
	return(
		esq2_Preto() &&
		esq_Preto() &&
		dir_Preto() &&
		dir2_Branco()
	);
}

bool Sensores::B_P_P_P(){
	return(
		esq2_Branco() &&
		esq_Preto() &&
		dir_Preto() &&
		dir2_Preto()
	);
}

bool Sensores::P_P_B_P(){
	return(
		esq2_Preto() &&
		esq_Preto() &&
		dir_Branco() &&
		dir2_Preto()
	);
}

bool Sensores::P_B_P_P(){
	return(
		esq2_Preto() &&
		esq_Branco() &&
		dir_Preto() &&
		dir2_Preto()
	);
}
