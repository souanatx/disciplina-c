#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");


// Crie um programa que receba 5 temperaturas e apresente a média das mesmas. 
   int temp = 1, i = 1, soma, media = 0;

   while (i <= 5)
    {
        cout << "\nInsira a temperatura: " << endl;
		cin >> temp;
		soma = soma + temp;
		i++;
	}
	
	media = soma/5;
	cout << "Média das temperaturas introduzidas = " << media;



    return 0;
}
