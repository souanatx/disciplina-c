#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");

	int n1, n2;
	
	printf("Insira um número: ");
	scanf("%d", &n1);
	printf("Insira outro número: ");
	scanf("%d", &n2);	
	
	if(n1 == n2)
		printf("São iguais\n");
	else // São diferentes
		if(n1 > n2)
			printf("O maior é: %d", n1);
		else
			printf("O maior é: %d", n2);

	return 0;
}

