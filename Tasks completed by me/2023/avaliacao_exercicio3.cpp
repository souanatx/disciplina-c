/*
Crie um programa que receba 10 elementos para um vetor de inteiros, procure apenas os elementos pares e mostre-os no ecrã. 
Nota: Não é necessário usar uma função. 
*/

#include <iostream>
#include <locale>

using namespace std;

#define MAX 10

int main() 
{
	setlocale (LC_ALL, "Portuguese");
    int vetor[MAX];
    cout << "\tInsira 10 elementos para o vetor:" << endl;
    for (int i = 0; i < MAX; i++) 
	{
        cout << "Elemento " << i+1 << ": ";
        cin >> vetor[i];
    }
    cout << "Elementos pares: ";
    for (int i = 0; i < MAX; i++) 
	{
        if (vetor[i] % 2 == 0) 
		{
            cout << vetor[i] << " ";
        }
    }
    cout << endl;
    return 0;
}
