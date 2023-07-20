/*
Crie um programa que receba uma palavra (sequência de “char”) de até 20 caracteres e utilizando  uma  função,  retorne  o  tamanho  da  palavra.  
Nota:  Não  utilize  a  função “length”. 
*/

#include <iostream>
#include <locale>
#include <cstring>

using namespace std;

#define MAX 20

int obterTamanhoPalavra(char[]);

int main() 
{
	setlocale (LC_ALL, "Portuguese");
	char palavra[MAX];
    cout << "Insira uma palavra com máximo de 20 caracteres: " << endl;
    cin >> palavra;
    int tamanho = obterTamanhoPalavra(palavra);
    if (tamanho > 20) 
	{
        cout << "ERRO: Palavra com mais do que 20 caracteres!" << endl;
        return 1;
    }
    cout << "Tamanho da palavra = " << tamanho << endl;
    return 0;
}

int obterTamanhoPalavra(char palavra[]) 
{
    int tamanho = 0;
    for (int i = 0; palavra[i] != '\0'; i++) 
	{
        tamanho++;
    }
    return tamanho;
}


/* Método proibido:
int main() 
{
	char palavra[MAX];
    cout << "Insira uma palavra com máximo de 20 caracteres: ";
    cin >> palavra;
    int tamanho = strlen(palavra);
    cout << "Tamanho da palavra = " << tamanho << endl;
    return 0;
}
*/
