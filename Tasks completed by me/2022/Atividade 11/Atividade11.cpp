#include <iostream>
#include <locale>

using namespace std;

int main()
{
// Crie um programa que receba 10 n�meros, guarde-os num array e apresente os n�meros recebidos no ecr� e a sua m�dia.
	int numeros[10], soma = 0;
	double media;
	
	for (int i = 0; i < 10; i++) 
	{
	cout << "Digite o n�mero " << i + 1 << ": ";
	cin >> numeros[i];
	}
	cout << "Os n�meros digitados foram: ";
	
	for (int i = 0; i < 10; i++) 
	{
	cout << numeros[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < 10; i++) 
	{
    soma += numeros[i];
	}
	media = soma / 10; 
	cout << "\nA m�dia dos n�meros �: " << media << endl;
	
//Relativamente ao array do ponto anterior, encontre o maior valor nele contido.
	int max = numeros[0];
	for (int i = 1; i < 10; i++) 
	{
	if (numeros[i] > max) 
		{
		max = numeros[i];
		}
	}
	cout << "\nO maior n�mero �: " << max << endl;

//Apresente todos os n�meros pares encontrados no array.
	cout << "\nOs n�meros pares s�o: ";
	for (int i = 0; i < 10; i++) 
	{
    if (numeros[i] % 2 == 0) 
		{
		cout << numeros[i] << " ";
    	}
	}	
	cout << endl;


 return 0;
}
