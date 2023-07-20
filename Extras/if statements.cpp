#include <iostream>
#include <locale>
#include <cstring>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

	int n1 = 5, n2 = 10;
	
	if(n1 > n2 && n1 > 0) // Verdadeiro
	{
		cout << "n1 é maior";
	}
	else // Falso
	{
		if(n1==n2)
		{
			cout << "São iguais";
		}
		else
		{
			cout << "n2 é maior";
		}		
	}
	
	
    return 0;
}
