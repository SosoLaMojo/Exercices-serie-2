#include <iostream>
#include <math.h>

/*
Cr�er un programme c++ qui donne les solutions r�el d�une �quation de type : ax2 + bx + c = 0
Pour rappel il y a 4 cas:
Si a et b == 0 => pas de solution
Si a == 0 => 1 solution -c/b
Si b2 - 4ac < 0 => pas de solution r�el
Sinon => 2 r�ponses

Les calculs sont:
x1 = (-b +sqrt(b2 - 4ac)) / 2a
x2 = (-b -sqrt(b2 - 4ac)) / 2a
*/

float a; // D�claration de la variable a.
float b; // D�claration de la variable b.
float c; // D�claration de la variable c.

float Solution1() { // Cr�ation de la fonction Solution1 avec comme calcul: -c/b.
	float solution;
	solution = -c / b;
	return solution;
}

float Solution2() { // Cr�ation de la fonction Solution2 avec comme calcul: x1 = (-b +sqrt(b2 - 4ac)) / 2a
	int x1;
	x1 = (-b + sqrt(2 * b - (4 * a * c)) / 2 * a);
	return x1;
}

float Solution3() { // Cr�ation de la fonction Solution2 avec comme calcul: x2 = (-b -sqrt(b2 - 4ac)) / 2a
	int x2;
	x2 = (-b - sqrt(2 * b - (4 *a * c)) / 2 * a);
	return x2;
}


int main()
{
	// Demande des valeurs a, b et c � l'utilisateur et stockage
	std::cout << "Donner la valeur de a \n";
	std::cin >> a;
	std::cout << "Donner la valeur de b \n";
	std::cin >> b;
	std::cout << "Donner la valeur de c \n";
	std::cin >> c;

	if (a == 0 && b == 0) { // si a est �gal a 0 et b est �gal a 0 ...
		std::cout << "Pas de solution\n"; // Affichage : "Pas de solution
	}
	else if (a == 0) { // Sinon si a est �gal a 0 ...
		std::cout << "Solution:" << Solution1() << "\n"; // ... affichage de la Solution1
	}
	else if ((2 * b) - (4 * a * c) < 0) { // Sinon si b2 - 4ac < 0 ...
		std::cout << "Pas de solution reel" << "\n"; // ... affichage "Pas de solution r�el"
	}
	else { // Sinon ...
		std::cout << "deux r\x82ponses possibles " << Solution2() << " et " << Solution3() << "\n"; // Affichage "deux solutions possibles" Solution2 et Solution1
	}

	system("pause");
	return EXIT_SUCCESS;
}