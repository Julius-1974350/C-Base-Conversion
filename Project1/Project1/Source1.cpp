#include "Header.h"

vector<int> conversion(int nombre, int convertisseur)
{
	vector<int> reponse;
	int nombre2;
	
	while (nombre != 0)
	{
		nombre2 = nombre % convertisseur;
		reponse.push_back(nombre2);
		nombre = nombre / convertisseur;
	}
	return reponse;
}

vector<int> conversion10(int nombre2, int convertisseur2)
{
	vector<int> reponse;
	int nombre3;
	int i = 0;
	while (nombre2 != 0)
	{
		reponse.push_back(nombre2 % 10 * pow(convertisseur2, i));
		nombre2 = nombre2 / 10;
		i++;
	}
	return reponse;
}
int lireEntier() 
{
	string clavier;
	int nb;
	getline(cin, clavier); 
	while (clavier.empty() || clavier.length() > 100000 || clavier.front() > '9' || clavier.front() < '0')
	{
		cout << "Veuillez entrer un autre nombre --> ";
		getline(cin, clavier);
	}
	nb = stoi(clavier);
	return nb;
}
int lireBase()
{
	string clavier;
	int nb;
	getline(cin, clavier); 
	while (clavier.empty() || clavier.length() > 1 || clavier.front() > '9' || clavier.front() < '0')
	{
		cout << "Veuillez entrer une autre base --> ";
		getline(cin, clavier);
	}
	nb = stoi(clavier);
	return nb;
}
int lireChoix()
{
	string clavier;
	int nb;
	getline(cin, clavier);
	while (clavier.empty() || clavier.length() > 1 || clavier.front() > '9' || clavier.front() < '0')
	{
		cout << "Veuillez entrer un choix --> ";
		getline(cin, clavier);
	}
	nb = stoi(clavier);
	return nb;
}