#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

//Escreva um programa em C para encontrar a soma dos 10 primeiros n�meros naturais (1-10)

	int soma = 0; 
	for (int i = 1; i <= 10; i++) 
	{
    soma += i;
	}
	cout << "A soma dos 10 primeiros n�meros naturais �: " << soma << endl;
	
//Escreva um programa que verifique se um n�mero � primo. Nota: para ser "primo" um n�mero apenas pode ser dividido por ele pr�prio e por 1, ou seja s� tem 2 divisores.

	int num;
    bool Primo = true;
    cout << "\nInsira um n�mero: ";
    cin >> num;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            Primo = false;
        }
    }
    if (Primo)
    {
        cout << num << " � primo!" << endl;
    }
    else
    {
        cout << num << " n�o � primo!" << endl;
    }

//Escreva um programa em C para mostrar um padr�o como tri�ngulo de �ngulo reto com um n�mero.

	int altura;
	cout << "\nInsira a altura do tri�ngulo: ";
	cin >> altura;
	for (int i = 1; i <= altura; i++) 
	{
    for (int j = 1; j <= i; j++) 
	{
      cout << j << " ";
    }
    cout << endl;
	}

//Escreva um programa em C para calcular o fatorial de um determinado n�mero.

	int numero, i, fatorial = 1;
    cout << "\nDigite um n�mero para calcular seu fatorial: ";
    cin >> numero;
    if (numero < 0) 
	{
        cout << "N�o � poss�vel calcular o fatorial de um n�mero negativo." << endl;
    }
    else 
	{
        for (i = 1; i <= num; i++) 
		{
            fatorial *= i;
        }
        cout << "O fatorial de " << numero << " � " << fatorial << endl;
    }

//Escreva um programa em C para mostrar os primeiros n termos (dado pelo utilizador) da s�rie de Fibonacci. 
	
	int ntermos, termo1 = 0, termo2 = 1, proximo_termo = 0;
  	cout << "\nN�mero de termos da s�rie de Fibonacci = ";
	cin >> ntermos;
	cout << "S�rie de Fibonacci: " << termo1 << " " << termo2 << " ";
	for (int i = 2; i < ntermos; i++)
	{
    proximo_termo = termo1 + termo2;
    cout << proximo_termo << " ";
    termo1 = termo2;
    termo2 = proximo_termo;
  	}

    return 0;
}
