#include <iostream>
#include <locale>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");


// Exercício 4 - Altere o programa anterior de modo a receber e comparar 3 inteiros, verificando qual o maior deles.

	int n1, n2, n3;
	
	cout << "Introduza três valores inteiros: " << endl;
	cin >> n1 >> n2 >> n3;
	
	cout << "O maior número é: " << endl;
		
	if(n1 >= n2 && n1 >= n3)
	{
		cout << n1;
	}
	else
	{
		if(n2 >= n1 && n2 >= n3)
		{
			cout << n2;
		}
		else
		{
			cout << n3;
		}		
	}
	
    return 0;
}
