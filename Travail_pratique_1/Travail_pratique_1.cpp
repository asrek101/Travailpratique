#include <iostream>
#include <string>
#include <cctype>

#include "Diete.h"
#include "Animaux.h"
#include "Tigre.h"
#include "Singe.h"
#include "Rhinoceros.h"
#include "Travail_pratique_1.h"

void affichercompte_rendu(int count, Diete diete[10], Animaux* animaux[250]);
int main()
{
	int check = 0;
	int tailleenclot=0;
	bool singe=true;
	int temp;
	int type;
	std::string nom;
	float poids;
	static int i = 0;
	static int count = 1;
	int choix;
	float totalviande = 0;
	float totalfruit = 0;
	float totalherbe = 0;

	Diete diete[250];
	Animaux* animaux[250];


	//animaux[0] = new Tigre("Alice", 120.8);
	//animaux[1] = new Singe("Bob", 10.5, true);
	//animaux[2] = new Singe("Monke", 8.7, false);
	//animaux[3] = new Rhinoceros("Eve", 1812.3, 1000);
	//animaux[4] = new Rhinoceros("Horny", 2021.5, 6000);

	do {
		std::cout << "Veuillez choisir parmis les options suivante " << std::endl;
		std::cout << "1 pour ajouter un tigre" << std::endl;
		std::cout << "2 pour ajouter un singe" << std::endl;
		std::cout << "3 pour ajouter un rhinocéros" << std::endl;
		std::cout << "4 Afficher" << std::endl;
		std::cout << "5 pour quitter" << std::endl;
		
		std::cin >> choix;
		switch (choix)

		{
		case 1:
			std::cout << "Combien de tigre voulez vous saisir?" << std::endl;
			std::cin >> temp;
			if (temp > 1) {
				count += temp;
			}
			for (i; i < count; i++)
			{
				std::cout << "Veuillez saisir le nom du tigre" << std::endl;
				std::cin >> nom;
				std::cout << "Veuillez saisir le poid du tigre" << std::endl;
				std::cin >> poids;
			    animaux[i] = new Tigre(nom, poids);
			}
			break;
		case 2:
			std::cout << "Combien de singe voulez vous saisir?" << std::endl;
			std::cin >> temp;
			if (temp > 1) {
				count += temp;
			}
			for (i; i < count; i++)
			{
				std::cout << "Veuillez saisir le nom du singe" << std::endl;
				std::cin >> nom;
				std::cout << "Veuillez saisir le poid du singe" << std::endl;
				std::cin >> poids;
				std::cout << "Veuillez saisir le type d'enclot 0 pour un enclot sans herbe / 1 pour un enclot avec herbe" << std::endl;
				std::cin >> type;
				animaux[i] = new Singe(nom, poids, type);
			}
			break;
		case 3:
			std::cout << "Combien de rhinoceros voulez vous saisir?" << std::endl;
			std::cin >> temp;
			if (temp > 1) {
				count += temp;
			}
			for (i; i < count; i++)
			{
				std::cout << "Veuillez saisir le nom du rhinoceros" << std::endl;
				std::cin >> nom;
				std::cout << "Veuillez saisir le poid du rhinoceros" << std::endl;
				std::cin >> poids;
				std::cout << "Veuillez saisir l'espace de l'enclot en metre-carre" << std::endl;
				std::cin >> tailleenclot;
				if (tailleenclot < 2000) {
					tailleenclot = 2000;
				}
			animaux[i] = new Rhinoceros(nom, poids, tailleenclot);
			}
			break;
		case 4:
			affichercompte_rendu(count, diete, animaux);
			break;
		case 5:
			for (int y=0; y < count; y++)
			{
				delete animaux[y];
			}
			break;
		default:
			break;
		}
	} while (choix != 5);
}
void affichercompte_rendu(int count, Diete diete[10], Animaux* animaux[250])
{
	float totalviande = 0;
	float totalfruit = 0;
	float totalherbe = 0;
	for (int i = 0; i < count; i++)
	{
		animaux[i]->affiche();
		animaux[i]->diete().afficherdiete();
		diete[i] = animaux[i]->diete();
	}
	for (int i = 0; i < count; i++)
	{

		totalviande += diete[i].getViande();
		totalfruit += diete[i].getFruit();
		totalherbe += diete[i].getHerbe();
	}
	std::cout << "Diete quotidienne totale :" << std::endl;
	std::cout << " Viande : " << totalviande << " kg" << std::endl;
	std::cout << " Fruits : " << totalfruit << " kg" << std::endl;
	std::cout << " Herbe : " << totalherbe << " kg" << std::endl;
}
