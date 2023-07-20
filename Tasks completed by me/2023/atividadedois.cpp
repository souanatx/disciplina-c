#include <iostream>
#include <locale>

#define MAX 51

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
//Escreva um programa que calcule a soma de todos os números pares entre 100 e 200. Guarde todos os números pares encontrados num vetor.

	int i, k = 0, num, soma;
	int pares[MAX];
	
	for(i = 100; i <= 200; i++) {
		if(i % 2 == 0)
		{
			soma += i;
			pares[k] = i;
			k++;
		}
	}
	
	for (i = 0; i < MAX; i++)
	{
		cout << pares[i] << endl;
	}
	
 return 0;
}
