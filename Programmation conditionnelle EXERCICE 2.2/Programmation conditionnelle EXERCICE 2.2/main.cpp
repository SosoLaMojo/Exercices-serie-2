#include <iostream>

/*EXERCICE 2.2
Écrire un programme qui demande à l'utilisateur de taper un entier et qui affiche GAGNE
si l'entier est entre 56 et 78 bornes incluses, sinon PERDU.
*/

int main()
{
	int NbrSaisi; // Déclaration variable NbrSaisi

	std::cout << "Donnez un nombre entier\n"; // Demander un nombre entier a l'utilisateur
	std::cin >> NbrSaisi; // Stockage valeur NbrSaisi

	if ((NbrSaisi >= 56) && (NbrSaisi <= 78)) // Si NbrSaisi est plus grand ou égal à 56 ET NbrSaisi est plus petit ou égal a 78...
	{
		std::cout << "GAGNE!"; // ... écrire GAGNE!
	}
	else // Sinon...
		std::cout << "PERDU!\n";// ... écrire PERDU!

	system("pause");
	return EXIT_SUCCESS;
}