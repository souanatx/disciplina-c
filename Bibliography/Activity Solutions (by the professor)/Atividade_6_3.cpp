#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");

	int n1, n2;
	
	printf("Insira um n�mero: ");
	scanf("%d", &n1);
	printf("Insira outro n�mero: ");
	scanf("%d", &n2);	
	
	if(n1 == n2)
		printf("S�o iguais\n");
	else // S�o diferentes
		if(n1 > n2)
			printf("O maior �: %d", n1);
		else
			printf("O maior �: %d", n2);

	return 0;
}

