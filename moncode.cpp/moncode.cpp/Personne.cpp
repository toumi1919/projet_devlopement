#include "stdafx.h"
#include <iostream>
#include <string>
#include "Personne.h"
using namespace std;

Personne::Personne(string n, int a)
{
	name = n;
	age = a;
}

void Personne::parler()
{
	cout << " je suis " << name << " et j ai " << age << endl;
}

void Personne::change_name(string nom_de_remplacement)
{
	name = nom_de_remplacement;
}