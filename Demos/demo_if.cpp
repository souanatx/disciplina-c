#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");

	int n1 = 5, n2 = 15;
	
	if(n1 > n2)
	{
		// Verdadeiro (n1 > n2)
		cout << "n1 é maior";
	}
	else
	{
		// Falso (n1 > n2)
		if(n1 == n2)
		{
			// Verdadeiro n1 = n2
			cout << "São iguais";
		}
		else
		{
			// Falso n1 = n2
			cout << "n2 é maior";
		}
	}
	
	return 0;
}

