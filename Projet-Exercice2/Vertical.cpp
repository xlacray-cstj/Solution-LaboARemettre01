// But : Effectuer l'exercice 2
// Auteur : Xavier Lacroix-Raymond
// Date : 09-09-2020


#include <iostream> // Ajout librairie pour cin et cout

int main()
{
	int nombre; // Création de la variable (nombre de 5 chiffres)

	std::cout << "Veuillez entrer un nombre de 5 chiffres: ";	// Message à l'utilisateur
	std::cin >> nombre; // Donne une valeur à la variable déclarée ligne 10

	if (nombre >= 10000 && nombre <= 99999) // Vérifier que la variable est bien un nombre de 5 chiffres
	{
		std::cout << nombre / 10000 << "\n";							// Isolation de tous les nombres
		std::cout << nombre / 1000 - (nombre / 10000) * 10 << "\n";
		std::cout << nombre / 100 - (nombre / 1000) * 10 << "\n";
		std::cout << nombre / 10 - (nombre / 100) * 10 << "\n";
		std::cout << nombre / 1 - (nombre / 10) * 10 << "\n";
	}
	else
	{
		std::cout << "Ce n'est pas un nombre de 5 chiffres";	// Message à l'utilsateur s'il ne rentre pas un nombre de 5 chiffres
	}

	return 0;
}

/* ----------PLAN DE TEST---------- 
	Si je rentre 12345, le programme me sortira 1	2	3	4	5
	Si je rentre 56789, le programme me sortira 5	6	7	8	9
	Si je rentre aaaaa, le programme me dira que ce n'est pas un nombre à 5 chiffres
	Si je rentre 123456, le programme me dira que ce n'est pas un nombre à 5 chiffres
*/