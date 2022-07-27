/*
	Nous allons écrire un programme qui demande l’âge d’un enfant à l’utilisateur.
	Ensuite, il l’informe de sa catégorie : "Poussin" de 6 à 7 ans,
	"Pupille" de 8 à 9 ans, "Minime" de 10 à 11 ans, "Cadet" entre 12 et 16 ans.
*/

#include <iostream>
using namespace std;
int main()
{
	int age(0);
	cout << " Quel est votre age" << endl;
	cin >> age;

	cin.ignore();
	if (age >= 6 and age <= 7)
	{
		cout << "Vous etes Poussin, vous avez  " << age << " ans" << endl;
	}
	else if  (age >= 8 and age <= 9)
	{
		cout << "Vous etes Pupille, vous avez  " << age << " ans" << endl;
	}
	else if (age >= 10 and age <= 11)
	{
		cout << "Vous etes Minime, vous avez  " << age << " ans" << endl;
	}
	else if (age >=12  and  age <= 16)
	{
		cout << "Vous etes Cadet, vous avez  " << age << " ans" << endl;
	}
	else
	{
		cout << " Vous n'avez pas de categorie" << endl;
	}
	return 0; 
}