#include <iostream>
#include <locale>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

// Exerc�cio 8 - Escreva um programa que verifique se um determinado caracter inserido pelo utilizador � alfab�tico e caso seja, indicar se o mesmo � mai�sculo ou min�sculo (ver tabela ascii).

	char ch;
	
	cout << "Introduza um dado caracter: ";
	cin >> ch;
	
	if(ch >= 65 && ch <= 90)
	{
		cout << "Introduziu uma letra mai�scula.";
	}
	else
	{
		if(ch >= 97 && ch <= 122)
		{
			cout << "Introduziu uma letra min�scula.";
		}
		else
		{
			cout << "Erro: o caracter introduzido n�o � alfab�tico!";
		}
	}

	
    return 0;
}
