#include <iostream>
#include <locale>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

// Exerc�cio 1 - Programa para verificar se um determinado n�mero � positivo ou negativo. 

	int n1;
	
	cout << "Introduza um n�mero: " << endl;
	cin >> n1;
	
	if(n1 > 0)
	{
		cout << "O n� introduzido � positivo";
	}
	else
	{
		if(n1==0)
		{
			cout << "Introduziu um n� neutro";
		}
		else
		{
			cout << "O n� introduzido � negativo";
		}		
	}


    return 0;
}
