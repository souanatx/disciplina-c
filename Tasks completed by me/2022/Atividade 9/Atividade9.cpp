#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

//Escreva um programa em C para encontrar a soma dos 10 primeiros números naturais (1-10)

	int soma = 0; 
	for (int i = 1; i <= 10; i++) 
	{
    soma += i;
	}
	cout << "A soma dos 10 primeiros números naturais é: " << soma << endl;
	
//Escreva um programa que verifique se um número é primo. Nota: para ser "primo" um número apenas pode ser dividido por ele próprio e por 1, ou seja só tem 2 divisores.

	int num;
    bool Primo = true;
    cout << "\nInsira um número: ";
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
        cout << num << " é primo!" << endl;
    }
    else
    {
        cout << num << " não é primo!" << endl;
    }

//Escreva um programa em C para mostrar um padrão como triângulo de ângulo reto com um número.

	int altura;
	cout << "\nInsira a altura do triângulo: ";
	cin >> altura;
	for (int i = 1; i <= altura; i++) 
	{
    for (int j = 1; j <= i; j++) 
	{
      cout << j << " ";
    }
    cout << endl;
	}

//Escreva um programa em C para calcular o fatorial de um determinado número.

	int numero, i, fatorial = 1;
    cout << "\nDigite um número para calcular seu fatorial: ";
    cin >> numero;
    if (numero < 0) 
	{
        cout << "Não é possível calcular o fatorial de um número negativo." << endl;
    }
    else 
	{
        for (i = 1; i <= num; i++) 
		{
            fatorial *= i;
        }
        cout << "O fatorial de " << numero << " é " << fatorial << endl;
    }

//Escreva um programa em C para mostrar os primeiros n termos (dado pelo utilizador) da série de Fibonacci. 
	
	int ntermos, termo1 = 0, termo2 = 1, proximo_termo = 0;
  	cout << "\nNúmero de termos da série de Fibonacci = ";
	cin >> ntermos;
	cout << "Série de Fibonacci: " << termo1 << " " << termo2 << " ";
	for (int i = 2; i < ntermos; i++)
	{
    proximo_termo = termo1 + termo2;
    cout << proximo_termo << " ";
    termo1 = termo2;
    termo2 = proximo_termo;
  	}

    return 0;
}
