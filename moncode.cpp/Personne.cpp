#include "stdafx.h"
#include <iostream>
#include "Personne.h"
//using namespace std;

Personne::Personne(std::string name, int age)
{
	name = name;
	age = age;
}

void Personne::parler()
{
	std::cout << "je m appelle " << name << " est j ai " << age << " year" << endl;
}

void Personne::change_name(std::string nom_de_remplacement)
{
	name = nom_de_remplacement;
}