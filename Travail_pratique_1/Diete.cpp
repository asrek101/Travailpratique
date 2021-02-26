#include "Diete.h"

Diete::Diete(float viande, float fruit, float herbe) {
	this->viande = viande;
	this->fruit = fruit;
	this->herbe = herbe;

}

void Diete::afficherdiete() {

	std::cout << " Mange " << this->viande << " kg de viande par jour" << std::endl;
	std::cout << " Mange " << this->fruit << " kg de fruit par jour" << std::endl;
	std::cout << " Mange " << this->herbe << " kg d'herbe par jour" << std::endl;
}

float Diete::getViande() {
	return this->viande;
}
float Diete::getFruit() {
	return this->fruit;
}
float Diete::getHerbe() {
	return this->herbe;
}