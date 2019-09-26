#include <iostream>

/*EXERCICE 2.4
Écrire un programme qui permet de faire des opérations sur un entier.
Pour donner le choix de l’opération à l’utilisateur il faut écrire à l’écran:
Additionner : 1
Soustraire : 2
Multiplier : 3
Diviser : 4
Ensuite selon le choix de l’utilisateur appliquer l’opération désirée.
Il faut reprendre l’exercice 2.3 en le réalisant cette fois avec un switch/case.
*/

float Nbr1;
float Nbr2;
int Choix;

int Addition() //Calcul de l'addition (numéro 1)
{
	int Resultat = Nbr1 + Nbr2;
	return Resultat;
}

int Soustraction() // Calcul de la soustraction (numéro 2)
{
	int Resultat = Nbr1 - Nbr2;
	return Resultat;
}

int Multiplication() // Calcul de la multiplication (numéro 3)
{
	int Resultat = Nbr1 * Nbr2;
	return Resultat;
}

float Division() // Calcul de la division (Numéro 4)
{
	float Resultat = Nbr1 / Nbr2;
	return Resultat;
}

int main()
{
	// Demande de l'opération à effectuer.
	std::cout << "Choisir l'op\x82ration: \n";
	std::cout << "Additionner: 1 \n";
	std::cout << "Soustraire: 2 \n";
	std::cout << "Multiplier: 3 \n";
	std::cout << "Diviser: 4 \n";
	std::cin >> Choix; // Stockage valeur Choix.

	// Demande des nombres et stockage des valeurs
	std::cout << "Entrez le premier entier: \n";
	std::cin >> Nbr1;
	std::cout << "Entrez le deuxi\x8Ame entier: \n";
	std::cin >> Nbr2;

	switch (Choix) // Début du switch avec comme paramètre la variable Choix
	{
	case 1: { // Case 1 choisi ...
		std::cout << "Votre r\x82sultat est : " << Addition() << "\n";// ...écrire le résultat en appelant la fonction Addition
		break;
	}
	case 2: { // Case 2 choisi ...
		std::cout << "Votre r\x82sultat est : " << Soustraction() << "\n";// ...écrire le résultat en appelant la fonction Soustraction
		break;
	}
	case 3: { // Case 3 choisi ...
		std::cout << "Votre r\x82sultat est : " << Multiplication() << "\n";// ...écrire le résultat en appelant la fonction Multiplication
		break;
	}
	case 4: { // Case 4 choisi ...
		std::cout << "Votre r\x82sultat est : " << Division() << "\n";// ...écrire le résultat en appelant la fonction Division
		break;
	}
		
	}

	system("pause");
	return EXIT_SUCCESS;
}