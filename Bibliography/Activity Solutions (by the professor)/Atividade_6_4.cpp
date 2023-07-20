#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");

	int n1, n2, n3;
	
	printf("Insira o primeiro número: ");
	scanf("%d", &n1);
	printf("Insira o segundo número: ");
	scanf("%d", &n2);
	printf("Insira o terceiro número: ");
	scanf("%d", &n3);

	if(n1 > n2 && n1 > n3)
		printf("O maior é: %d", n1);
	else
		if(n2 > n1 && n2 > n3)
			printf("O maior é: %d", n2);
		else
			printf("O maior é: %d", n3);
	
	/*
	// Outra implementação
	
	int maior = -100000000;
	
	if(n1 > maior)
		maior = n1;
	if(n2 > maior)
		maior = n2;
	if(n3 > maior)
		maior = n3;
			
	printf("O maior é: %d", maior);
	*/		
		

	return 0;
}

