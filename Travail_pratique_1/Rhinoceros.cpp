#include "Rhinoceros.h"
#include "Diete.h"
#include <iostream>

Rhinoceros::Rhinoceros(std::string nom, float poids, int espace) : Animaux(nom, poids) {
	this->espace = espace;
	if (this->espace < 2000) {
		this->espace = 2000;
	}
	
	}
void Rhinoceros::affiche() {
	std::cout << "Rhinoceros : " << this->nom << " (" << this->poids << " kg) " << std::endl;
	std::cout << " Enclos de " << this->espace << " metre-carres" << std::endl;
}
Rhinoceros::~Rhinoceros() {
	std::cout << "**Rhinoceros detruit**" << std::endl;
}
Diete Rhinoceros::diete() {
	float temp = ((this->espace / 1000) * 10);
	float fruit = 0;
	float herbe = this->poids * 0.02;
	fruit = 0.005 * this->poids;
	if ( temp < herbe ) {
		herbe = herbe - temp;
	}
	else {
		herbe = 0;
	}
	Diete t = Diete(0, fruit, herbe);
	return t;
}
std::string Rhinoceros::getnom() {
	return this->nom;
}