#include "stdafx.h"
#include <iostream>
#include <string>
//using namespace std;

class Personne
{
	public:
		Personne(std::string n,int a);
		void parler();
		void change_name(std::string nom_de_remplacement);

	private:
		std::string name;
		int age;
};