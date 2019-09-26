#include <iostream>
#include <math.h>
#include <stdio.h>

/*EXERCICE 2.1
Créer un programme qui demande à l’utilisateur d’entrer un nombre flottant et écrit la racine carré du nombre.
Si le nombre est négatif le programme doit avertir qu’il y a une erreur.
*/

int main()
{
	float NbrSaisi;
	float racine;

	std::cout << "Saisir un nombre a virgule\n";
	std::cin >> NbrSaisi;
	
	if (NbrSaisi >= 0) // Si le nombre saisi est plus grand ou égal a zero...
	{
		std::cout << "La racine carr\x82 de " << NbrSaisi << " est: " << sqrt(NbrSaisi) << "\n"; // ... écrire la racine carré.
	}
	else // Sinon ...
	{
		std::cout << "ERREUR!\n"; // ... écrire ERREUR.
	}

	system("pause");
	return EXIT_SUCCESS;
}