// moncode.cpp.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <iostream>
#include "fonctions.h"
#include "Personne.h"
#include <string>

using namespace std;

int main()
{
	//MON MAIN COMMENCE ICI
	Personne p1("ahmed", 25);
	p1.parler();
	p1.change_name("toumi");
	p1.parler();
    return 0;
}

