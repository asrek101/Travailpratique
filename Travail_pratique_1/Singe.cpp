#include "Singe.h"
#include "Diete.h"


Singe::Singe(std::string nom, float poids,int type) : Animaux(nom, poids) {
	this->type = type;
}
void Singe::affiche() {
	std::cout <<"Singe : " <<this->nom << " ("<< this->poids <<" kg) "<<std::endl;
	if (this->type==1) {
		std::cout << " Enclos avec herbe" << std::endl;
	}
	else {
		std::cout << " Enclos sans herbe" << std::endl;
	}
}
Singe::~Singe() {
	std::cout << "singe detruit" << std::endl;
}
Diete Singe::diete() {
	float viande = 0;
	float fruit = 0;
	float herbe = 0;
	viande = 0.01 * this->poids;
	fruit = 0.01 * this->poids;
	if (this->type == 0) {
		herbe = 0.005 * this->poids;
	}
	Diete t =Diete(viande, fruit, herbe);
	return t;
}