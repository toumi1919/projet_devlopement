#include "stdafx.h"
#include <iostream>
//using namespace std;

class Personne
{
	public:
		Personne(std::string name,int age);
		void parler();
		void change_name(std::string nom_de_remplacement);

	private:
		std::string name;
		int age;
};