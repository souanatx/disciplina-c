#include <iostream>
#include <locale>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");


// Exercício 3 - Programa que receba dois valores inteiros em duas variáveis distintas e que compare esses valores recebidos. Imprima o maior dos dois valores.

	int n1, n2;
	
	cout << "Introduza dois valores inteiros: " << endl;
	cin >> n1 >> n2;
	
	cout << "Vejamos qual é o maior número: " << endl;
		
	if(n1 > n2)
	{
		cout << n1;
	}
	else
	{
		if(n1==n2)
		{
			cout << "Os números são iguais";
		}
		else
		{
			cout << n2;
		}		
	}

    return 0;
}
