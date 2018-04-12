#include "Sensores.h"


bool Sensores::maisEsqViuBranco(){
	if (robo.lerSensorLinhaEsq2() > Separacao_Branco_Preto)
		return true;	
	else
		return false;
}

bool Sensores::maisEsqViuPreto(){
	if (robo.lerSensorLinhaEsq2() < Separacao_Branco_Preto)
		return true;
	else
		return false;
}

bool Sensores::esqViuBranco(){
	if (robo.lerSensorLinhaEsq() > Separacao_Branco_Preto)
		return true;	
	else
		return false;
}

bool Sensores::esqViuPreto(){
	if (robo.lerSensorLinhaEsq() < Separacao_Branco_Preto)
		return true;	
	else 
		return false;
	
}

bool Sensores::dirViuBranco(){
	if(robo.lerSensorLinhaDir() > Separacao_Branco_Preto)
		return true;
	else 
		return false;
		
}

bool Sensores::dirViuPreto(){
	if(robo.lerSensorLinhaDir() < Separacao_Branco_Preto)
		return true;
	else 
		return false;
			
}

bool Sensores::maisDirViuBranco(){
	if(robo.lerSensorLinhaDir2() > Separacao_Branco_Preto)
		return true;
	else 
		return false;
		
}   

bool Sensores::maisDirViuPreto(){
	if(robo.lerSensorLinhaDir2() < Separacao_Branco_Preto)
		return true;
	else 
		return false;
	
} 

/////////////////////////////////////////

bool Sensores::todosBrancos(){
	return(
		maisEsqViuBranco() &&
		esqViuBranco() &&
		dirViuBranco() &&
		maisDirViuBranco()
	);
}

bool Sensores::todosPretos(){
	return(
		maisEsqViuPreto() &&
		esqViuPreto() &&
		dirViuPreto() &&
		maisDirViuPreto()
	);
}

///////////////////////////////////////////////////////

bool Sensores::preto_branco_branco_branco(){
	return(
		maisEsqViuPreto() &&
		esqViuBranco() &&
		dirViuBranco() &&
		maisDirViuBranco()
	);
}

bool Sensores::branco_branco_branco_preto(){
	return(
		maisEsqViuBranco() &&
		esqViuBranco() &&
		dirViuBranco() &&
		maisDirViuPreto()
	);
}

bool Sensores::preto_preto_branco_branco(){
	return(
		maisEsqViuPreto() &&
		esqViuPreto() &&
		dirViuBranco() &&
		maisDirViuBranco()
	);
}

bool Sensores::branco_branco_preto_preto(){
	return(
		maisEsqViuBranco() &&
		esqViuBranco() &&
		dirViuPreto() &&
		maisDirViuPreto()
	);
}

bool Sensores::branco_preto_preto_branco(){
	return(
		maisEsqViuBranco() &&
		esqViuPreto() &&
		dirViuPreto() &&
		maisDirViuBranco()
	);
}

bool Sensores::preto_branco_branco_preto(){
	return(
		maisEsqViuPreto() &&
		esqViuBranco() &&
		dirViuBranco() &&
		maisDirViuPreto()
	);
}

bool Sensores::preto_branco_preto_branco(){
	return(
		maisEsqViuPreto() &&
		esqViuBranco() &&
		dirViuPreto() &&
		maisDirViuBranco()
	);
}

bool Sensores::branco_preto_branco_preto(){
	return(
		maisEsqViuBranco() &&
		esqViuPreto() &&
		dirViuBranco() &&
		maisDirViuPreto()
	);
}

bool Sensores::preto_preto_preto_branco(){
	return(
		maisEsqViuPreto() &&
		esqViuPreto() &&
		dirViuPreto() &&
		maisDirViuBranco()
	);
}

bool Sensores::branco_preto_preto_preto(){
	return(
		maisEsqViuBranco() &&
		esqViuPreto() &&
		dirViuPreto() &&
		maisDirViuPreto()
	);
}

bool Sensores::preto_preto_branco_preto(){
	return(
		maisEsqViuPreto() &&
		esqViuPreto() &&
		dirViuBranco() &&
		maisDirViuPreto()
	);
}

bool Sensores::preto_branco_preto_preto(){
	return(
		maisEsqViuPreto() &&
		esqViuBranco() &&
		dirViuPreto() &&
		maisDirViuPreto()
	);
}
