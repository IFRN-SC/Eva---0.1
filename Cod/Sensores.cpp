#include "Sensores.h"


bool Sensores::maisEsqViuBranco(){
	return  (robo.lerSensorLinhaEsq2() > refle_maisEsq.getSeparacao());  
}

bool Sensores::maisEsqViuPreto(){
	return  (robo.lerSensorLinhaEsq2() < refle_maisEsq.getSeparacao());  
}

bool Sensores::esqViuBranco(){
	return  (robo.lerSensorLinhaEsq() > refle_Esq.getSeparacao());  
}

bool Sensores::esqViuPreto(){
	return  (robo.lerSensorLinhaEsq() < refle_Esq.getSeparacao());  
	
}

bool Sensores::dirViuBranco(){
	return (robo.lerSensorLinhaDir() > refle_Dir.getSeparacao());  
		
}

bool Sensores::dirViuPreto(){
	return (robo.lerSensorLinhaDir() < refle_Dir.getSeparacao());  
			
}

bool Sensores::maisDirViuBranco(){
	return (robo.lerSensorLinhaDir2() > refle_maisDir.getSeparacao());  
		
}   

bool Sensores::maisDirViuPreto(){
	return (robo.lerSensorLinhaDir2() < refle_maisDir.getSeparacao());  
	
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
