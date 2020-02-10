 
#include "Header.h"

using namespace std;

int main()
{
	int choix;
	int nombreDecimale;
	int nombrespecial;
	int nombre;
	int base;
	int choix2 = 1;

	while (choix2 == 1)
	{
		cout << "Quelle conversion voulez-vous faire? \n 1- Decimale a autre \n 2- Autre a decimale \n";
		cout << "Entrer votre choix : ";
		choix = lireChoix();
		system("cls");
		if (choix == 1)
		{
			cout << "Quel est le nombre decimal a convertir ? : ";
			nombreDecimale = lireEntier();
			cout << "En quelle base : ";
			base = lireBase();
			vector<int> reponse = conversion(nombreDecimale, base);
			system("cls");
			cout << "Le nombre converti est : ";
			int i = reponse.size() - 1;
			while (i != 0)
			{
				cout << reponse.at(i);
				i--;
			}
			cout << "\n";
		}
		if (choix == 2)
		{
			cout << "Quel est le nombre a convertir en decimal ?";
			nombrespecial = lireEntier();
			cout << "Quelle est la base initiale ?";
			base = lireBase();
			vector<int> reponse = conversion10(nombrespecial, base);
			system("cls");
			cout << "Le nombre converti est : ";
			int i = reponse.size() - 1;
			int reponse2 = 0;
			while (i != 0)
			{
				reponse2 = reponse2 + reponse.at(i);
				i--;
			}
			cout << reponse2;
			cout << "\n";
		}
		cout << "Voulez-vous faire une autre conversion(0 - non, 1 - oui)";
		cin >> choix2;
		system("cls");
	}
	return 0;
}