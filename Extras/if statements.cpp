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
		cout << "n1 � maior";
	}
	else // Falso
	{
		if(n1==n2)
		{
			cout << "S�o iguais";
		}
		else
		{
			cout << "n2 � maior";
		}		
	}
	
	
    return 0;
}
