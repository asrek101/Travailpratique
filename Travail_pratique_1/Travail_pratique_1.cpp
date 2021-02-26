#include <iostream>
#include <string>

#include "Diete.h"
#include "Animaux.h"
#include "Tigre.h"
#include "Singe.h"
#include "Rhinoceros.h"
#include "Travail_pratique_1.h"

void affichercompte_rendu( Animaux* animaux[250]);
void ajoutertigre(Animaux* animaux[250]);
void ajoutersinge(Animaux* animaux[250]);
void ajouterrhino(Animaux* animaux[250]);

static int i =5;

int main()


{
	int i = 0;
	int choix;

	Animaux* animaux[250];
	
	animaux[0] = new Tigre("Alice", 120.8);
	animaux[1] = new Singe("Bob", 10.5, true);
	animaux[2] = new Singe("Monke", 8.7, false);
	animaux[3] = new Rhinoceros("Eve", 1812.3, 1000);
	animaux[4] = new Rhinoceros("Horny", 2021.5, 6000);

	do {
		
		std::cout << "Veuillez choisir parmis les options suivante " << std::endl;
		std::cout << "1 pour ajouter un tigre" << std::endl;
		std::cout << "2 pour ajouter un singe" << std::endl;
		std::cout << "3 pour ajouter un rhinocéros" << std::endl;
		std::cout << "4 Afficher" << std::endl;
		std::cout << "5 pour quitter" << std::endl;
		std::cout << i << std::endl;
		std::cin >> choix;
		switch (choix)
		{
		case 1:
			ajoutertigre(animaux);
			break;
		case 2:
			ajoutersinge(animaux);
			break;
		case 3:
			ajouterrhino(animaux);
			break;
		case 4:
			affichercompte_rendu(animaux);
			break;
		case 5:
			if (i > 0) {
				for (int y = 0; y < i; y++)
				{
					delete animaux[y];
				}
			}
			break;
		default:
			break;
		}
	} while (choix != 5);
}
void affichercompte_rendu(Animaux* animaux[250])
{
	float totalviande = 0;
	float totalfruit = 0;
	float totalherbe = 0;
	for (int x = 0; x < i; x++)
	{
		animaux[x]->affiche();
		animaux[x]->diete().afficherdiete();
		totalviande += animaux[x]->diete().getViande();
	    totalfruit += animaux[x]->diete().getFruit();
		totalherbe += animaux[x]->diete().getHerbe();
	}

	std::cout << "Diete quotidienne totale :" << std::endl;
	std::cout << " Viande : " << totalviande << " kg" << std::endl;
	std::cout << " Fruits : " << totalfruit << " kg" << std::endl;
	std::cout << " Herbe : " << totalherbe << " kg" << std::endl;
}
void ajoutertigre(Animaux* animaux[250]) {
	std::string nom;
	float poids;
	int temp=i;
	int quantite;
	std::cout << "Combien de tigre voulez vous saisir?" << std::endl;
	std::cin >> quantite;
	temp += quantite;

	for (i; i < temp; i++)
	{
		std::cout << "Veuillez saisir le nom du tigre" << std::endl;
		std::cin >> nom;
		std::cout << "Veuillez saisir le poid du tigre" << std::endl;
		std::cin >> poids;
		animaux[i] = new Tigre(nom, poids);
	}
	
}
void ajoutersinge(Animaux* animaux[250]) {
	std::string nom;
	float poids;
	int temp=i;
	int type;
	int quantite;
	std::cout << "Combien de singe voulez vous saisir?" << std::endl;
	std::cin >> quantite;
	temp += quantite;

	for (i; i < temp; i++)
	{
		std::cout << "Veuillez saisir le nom du singe" << std::endl;
		std::cin >> nom;
		std::cout << "Veuillez saisir le poid du singe" << std::endl;
		std::cin >> poids;
		std::cout << "Veuillez saisir le type d'enclot 1 pour un enclot avec herbe ou 0 pour un enclot sans herbe  " << std::endl;
		std::cin >> type;
		animaux[i] = new Singe(nom, poids, type);
	}

}
void ajouterrhino(Animaux* animaux[250]) {
	std::string nom;
	float poids;
	int temp=i;
	int tailleenclot;
	int quantite;
	std::cout << "Combien de rhinoceros voulez vous saisir?" << std::endl;
	std::cin >> quantite;
	temp += quantite;;

	for (i; i < temp; i++)
	{
		std::cout << "Veuillez saisir le nom du rhinoceros" << std::endl;
		std::cin >> nom;
		std::cout << "Veuillez saisir le poid du rhinoceros" << std::endl;
		std::cin >> poids;
		std::cout << "Veuillez saisir l'espace de l'enclot en metre-carre" << std::endl;
		std::cin >> tailleenclot;
		animaux[i] = new Rhinoceros(nom, poids, tailleenclot);
	}

}