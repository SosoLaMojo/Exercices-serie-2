#include <iostream>
#include <math.h>
#include <stdio.h>

/*EXERCICE 2.1
Cr�er un programme qui demande � l�utilisateur d�entrer un nombre flottant et �crit la racine carr� du nombre.
Si le nombre est n�gatif le programme doit avertir qu�il y a une erreur.
*/

int main()
{
	float NbrSaisi;
	float racine;

	std::cout << "Saisir un nombre a virgule\n";
	std::cin >> NbrSaisi;
	
	if (NbrSaisi >= 0) // Si le nombre saisi est plus grand ou �gal a zero...
	{
		std::cout << "La racine carr\x82 de " << NbrSaisi << " est: " << sqrt(NbrSaisi) << "\n"; // ... �crire la racine carr�.
	}
	else // Sinon ...
	{
		std::cout << "ERREUR!\n"; // ... �crire ERREUR.
	}

	system("pause");
	return EXIT_SUCCESS;
}