#include <iostream>

/*EXERCICE 2.0
Cr�er un programme qui demande � l�utilisateur d�entrer un entier et qui �crit dans la console s�il est pair ou impaire
*/

int main()
{
	int entier;// D�claration de la variable entier

	std::cout << "Entrez un entier: ";// Demande de l'entier.
	std::cin >> entier;// Stockage entier.

	if (entier % 2 == 0)// Si l'entier est divisible par 2 et �gal a 0 ...
	{
		std::cout << entier <<" est pair\n";// ... il est pair.
	}
	else// Sinon ...
	{
		std::cout << entier << " est impair\n"; // ... il est impaire.
	}

	system ("pause");
	return EXIT_SUCCESS;
}