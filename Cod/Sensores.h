#ifndef SENSORES_H
#define SENSORES_H

#include <robo_hardware.h>
#include "Calibracao.h"

class Sensores {
public:
	//~~~~~~~~~~~ SONAR ~~~~~~~~~~~//

	bool sonarViuObstaculo();

	//----------------------------//

	//~~~~~~~~~ SENSORES DE REFLETÂNCIA ~~~~~~~~~//

	// Caso "Todos"

	bool branco_branco_branco_branco();
	bool preto_preto_preto_preto();

	// Caso "Internos"

	bool branco_preto_branco_branco();
	bool branco_branco_preto_branco();

	// Caso "Externos"

	bool preto_branco_branco_branco();
	bool branco_branco_branco_preto();

	// Caso "Duplo"

	bool preto_preto_branco_branco();
	bool branco_branco_preto_preto();

	// Caso "Triplo"

	bool preto_preto_preto_branco();
	bool branco_preto_preto_preto();

	// Caso "Alternados"

	bool preto_branco_preto_branco();
	bool branco_preto_branco_preto();

	// Caso "Interno branco"

	bool preto_branco_preto_preto();
	bool preto_preto_branco_preto();

	// Caso "Duplo preto"

	bool preto_branco_branco_preto();
	bool branco_preto_preto_branco();	


private:

	Calibracao refle_maisEsq, refle_Esq, refle_Dir, refle_maisDir;

};

static Sensores sensores, sensor;


#endif