#include "Animaux.h"
#include "Diete.h"

#include <iostream>

Animaux::Animaux(std::string nom, float poids) {
	this->nom = nom;
	this->poids = poids;
	
}
void Animaux::affiche() {
	std::cout << "Animaux" << this->nom <<std::endl;
}
Animaux::~Animaux() {
//	std::cout << "Animaux detruit" <<std::endl;
}
