#include "Tigre.h"
#include "Diete.h"

Tigre::Tigre(std::string nom, float poids) : Animaux(nom,poids) {
	this->nom = nom;
	this->poids = poids;

}
void Tigre::affiche() {
	std::cout << "Tigre : " << this->nom << " (" << this->poids << " kg) " << std::endl;
}
Tigre::~Tigre() {
	std::cout << "**tigre detruit**" << std::endl;
}
Diete Tigre::diete() {
	float viande=0;
	viande = 0.05 * this->poids;
	Diete t = Diete(viande,0,0);
	return t;
}
std::string Tigre::getnom() {
	return this->nom;
}