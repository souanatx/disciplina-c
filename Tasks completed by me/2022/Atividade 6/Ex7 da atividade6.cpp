#include <iostream>
#include <locale>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

// Exerc�cio 7 - Escreva um programa que mostre o valor absoluto de um n�mero (por exemplo absoluto de -1 = 1). 

	int n1;
	
	cout << "Escreva um valor negativo: ";
	cin >> n1;
	
	if(n1 >= 0)
	{
		cout << "Escreveu um valor positivo e, portanto, o valor absoluto de " << n1 << " � " << n1;
	}
	else
	{
		cout << "O valor absoluto de " << n1 << " � " << -n1;		
	}

	
    return 0;
}
