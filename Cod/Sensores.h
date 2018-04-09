#ifndef SENSORES_H
#define SENSORES_H

class Sensores {
public:
	int centrais();
	int ladoVirar();
private:
	bool esq2_Branco(); 	// Mais esquerdo Branco
	bool esq2_Preto(); 		// Mais esquerdo Preto
	bool esq_Branco();      // Esquerdo Branco
	bool esq_Preto();       // Esquerdo Preto
	bool dir_Branco();      // Dreito Branco
	bool dir_Preto();      	// Direito Preto
	bool dir2_Branco(); 	// Mais direito Branco
	bool dir2_Preto(); 		// Mais direito Preto
	
	bool B_B_B_B();
	bool P_P_P_P();

	bool B_P_B_B();
	bool B_B_P_B();
	bool P_B_B_B();
	bool B_B_B_P();

	bool P_P_B_B();
	bool B_B_P_P();
	bool B_P_P_B();
	bool P_B_B_P();
	bool P_B_P_B();
	bool B_P_B_P();

	bool P_P_P_B();
	bool B_P_P_P();
	bool P_P_B_P();
	bool P_B_P_P();
};

static Sensores refletancia;
#endif