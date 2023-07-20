#include <iostream>
#include <locale>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

// Exercício 8 - Escreva um programa que verifique se um determinado caracter inserido pelo utilizador é alfabético e caso seja, indicar se o mesmo é maiúsculo ou minúsculo (ver tabela ascii).

	char ch;
	
	cout << "Introduza um dado caracter: ";
	cin >> ch;
	
	if(ch >= 65 && ch <= 90)
	{
		cout << "Introduziu uma letra maiúscula.";
	}
	else
	{
		if(ch >= 97 && ch <= 122)
		{
			cout << "Introduziu uma letra minúscula.";
		}
		else
		{
			cout << "Erro: o caracter introduzido não é alfabético!";
		}
	}

	
    return 0;
}
