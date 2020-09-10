// But : Effectuer l'exercice 1
// Auteur : Xavier Lacroix-Raymond
// Date : 09-09-2020

#include <iostream> // Librairie pour cin et cout

int main()
{
	int number; // Création variable

	std::cout << "Veuillez entrer un nombre entier: "; // Message à l'utilisateur
	std::cin >> number; // Donne valeur à la variable

	if (number % 2) 
		std::cout << number << " est un nombre impair"; // Affiché si le nombre est impair
	else
		std::cout << number << " est un nombre pair"; // Affiché si le nombre est pair

	return 0;
}

/* ----------PLAN DE TEST----------
	Si je rentre 2, le programme me dira que mon nombre est pair
	Si je rentre 3, le programme me dira que mon nombre est impair
*/