#include <iostream>
#include <locale>

using namespace std;

int main()
{
// Crie um programa que receba 10 números, guarde-os num array e apresente os números recebidos no ecrã e a sua média.
	int numeros[10], soma = 0;
	double media;
	
	for (int i = 0; i < 10; i++) 
	{
	cout << "Digite o número " << i + 1 << ": ";
	cin >> numeros[i];
	}
	cout << "Os números digitados foram: ";
	
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
	cout << "\nA média dos números é: " << media << endl;
	
//Relativamente ao array do ponto anterior, encontre o maior valor nele contido.
	int max = numeros[0];
	for (int i = 1; i < 10; i++) 
	{
	if (numeros[i] > max) 
		{
		max = numeros[i];
		}
	}
	cout << "\nO maior número é: " << max << endl;

//Apresente todos os números pares encontrados no array.
	cout << "\nOs números pares são: ";
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
