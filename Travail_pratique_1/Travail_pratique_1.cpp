//Alain gionet @Kosmosqc@gmail.com
#include <iostream>
#include <string>

#include "Diete.h"
#include "Animaux.h"
#include "Tigre.h"
#include "Singe.h"
#include "Rhinoceros.h"
#include "Travail_pratique_1.h"

void afficherCompte_rendu(Animaux* animaux[250]);
void ajouterTigre(Animaux* animaux[250]);
void ajouterSinge(Animaux* animaux[250]);
void ajouterRhino(Animaux* animaux[250]);
void bonusEffacer(Animaux* animaux[250]);
static int i = 0;

int main()
{
	
	int choix;

	Animaux* animaux[250];

	/*animaux[0] = new Tigre("Alice", 120.8);
	animaux[1] = new Singe("Bob", 10.5, true);
	animaux[2] = new Singe("Monke", 8.7, false);
	animaux[3] = new Rhinoceros("Eve", 1812.3, 1000);
	animaux[4] = new Rhinoceros("Horny", 2021.5, 6000);*/

	do {

		std::cout << "Veuillez choisir parmis les options suivante " << std::endl;
		std::cout << "1 pour ajouter un tigre" << std::endl;
		std::cout << "2 pour ajouter un singe" << std::endl;
		std::cout << "3 pour ajouter un rhinoc�ros " << std::endl;
		std::cout << "4 Afficher " << std::endl;
		std::cout << "5 pour quitter " << std::endl;
		std::cout << "6 bonus effacer " << std::endl;
		std::cout << i << std::endl;
		std::cin >> choix;
		switch (choix)
		{
		case 1:
			ajouterTigre(animaux);
			break;
		case 2:
			ajouterSinge(animaux);
			break;
		case 3:
			ajouterRhino(animaux);
			break;
		case 4:
			afficherCompte_rendu(animaux);
			break;
		case 5:
			if (i > 0) {
				for (int y = 0; y < i; y++)
				{
					delete animaux[y];
				}
			}
			break;
		case 6:
		{
			bonusEffacer(animaux);
		}
		default:
			break;
		}
	} while (choix != 5);
}
void afficherCompte_rendu(Animaux* animaux[250])
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
void ajouterTigre(Animaux* animaux[250]) {
	std::string nom;
	float poids;
	int temp = i;
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
void ajouterSinge(Animaux* animaux[250]) {
	std::string nom;
	float poids;
	int temp = i;
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
void ajouterRhino(Animaux* animaux[250]) {
	std::string nom;
	float poids;
	int temp = i;
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
void bonusEffacer(Animaux* animaux[250]) {
	if (i > 0) {
		std::string nom;
		std::cout << "Veillez saisir le nom de l'animal a effacer de la liste" << std::endl;
		std::cin >> nom;
		bool check = false;

		for (int y = 0; y < i; y++)
		{
			if (animaux[y]->getnom() == nom) {
				std::cout << "animal trouver" << std::endl;
				delete animaux[y];
				animaux[y] = animaux[i - 1];
				i = i - 1;
				check = true;
			}
		}
		if (!check) {
			std::cout << "animal introuvable" << std::endl;
		}
	}
	else
		std::cout << "erreur tableau vide" << std::endl;
}