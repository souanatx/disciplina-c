#include <iostream>
#include <locale>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

// Exercício 1 - Programa para verificar se um determinado número é positivo ou negativo. 

	int n1;
	
	cout << "Introduza um número: " << endl;
	cin >> n1;
	
	if(n1 > 0)
	{
		cout << "O nº introduzido é positivo";
	}
	else
	{
		if(n1==0)
		{
			cout << "Introduziu um nº neutro";
		}
		else
		{
			cout << "O nº introduzido é negativo";
		}		
	}


    return 0;
}
