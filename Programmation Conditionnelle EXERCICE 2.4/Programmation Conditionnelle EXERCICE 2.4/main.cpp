#include <iostream>

/*EXERCICE 2.4
�crire un programme qui permet de faire des op�rations sur un entier.
Pour donner le choix de l�op�ration � l�utilisateur il faut �crire � l��cran:
Additionner : 1
Soustraire : 2
Multiplier : 3
Diviser : 4
Ensuite selon le choix de l�utilisateur appliquer l�op�ration d�sir�e.
Il faut reprendre l�exercice 2.3 en le r�alisant cette fois avec un switch/case.
*/

float Nbr1;
float Nbr2;
int Choix;

int Addition() //Calcul de l'addition (num�ro 1)
{
	int Resultat = Nbr1 + Nbr2;
	return Resultat;
}

int Soustraction() // Calcul de la soustraction (num�ro 2)
{
	int Resultat = Nbr1 - Nbr2;
	return Resultat;
}

int Multiplication() // Calcul de la multiplication (num�ro 3)
{
	int Resultat = Nbr1 * Nbr2;
	return Resultat;
}

float Division() // Calcul de la division (Num�ro 4)
{
	float Resultat = Nbr1 / Nbr2;
	return Resultat;
}

int main()
{
	// Demande de l'op�ration � effectuer.
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

	switch (Choix) // D�but du switch avec comme param�tre la variable Choix
	{
	case 1: { // Case 1 choisi ...
		std::cout << "Votre r\x82sultat est : " << Addition() << "\n";// ...�crire le r�sultat en appelant la fonction Addition
		break;
	}
	case 2: { // Case 2 choisi ...
		std::cout << "Votre r\x82sultat est : " << Soustraction() << "\n";// ...�crire le r�sultat en appelant la fonction Soustraction
		break;
	}
	case 3: { // Case 3 choisi ...
		std::cout << "Votre r\x82sultat est : " << Multiplication() << "\n";// ...�crire le r�sultat en appelant la fonction Multiplication
		break;
	}
	case 4: { // Case 4 choisi ...
		std::cout << "Votre r\x82sultat est : " << Division() << "\n";// ...�crire le r�sultat en appelant la fonction Division
		break;
	}
		
	}

	system("pause");
	return EXIT_SUCCESS;
}