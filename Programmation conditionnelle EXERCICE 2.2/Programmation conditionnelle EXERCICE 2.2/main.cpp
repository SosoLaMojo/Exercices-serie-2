#include <iostream>

/*EXERCICE 2.2
�crire un programme qui demande � l'utilisateur de taper un entier et qui affiche GAGNE
si l'entier est entre 56 et 78 bornes incluses, sinon PERDU.
*/

int main()
{
	int NbrSaisi; // D�claration variable NbrSaisi

	std::cout << "Donnez un nombre entier\n"; // Demander un nombre entier a l'utilisateur
	std::cin >> NbrSaisi; // Stockage valeur NbrSaisi

	if ((NbrSaisi >= 56) && (NbrSaisi <= 78)) // Si NbrSaisi est plus grand ou �gal � 56 ET NbrSaisi est plus petit ou �gal a 78...
	{
		std::cout << "GAGNE!"; // ... �crire GAGNE!
	}
	else // Sinon...
		std::cout << "PERDU!\n";// ... �crire PERDU!

	system("pause");
	return EXIT_SUCCESS;
}