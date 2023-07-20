#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	int n1;
	
	printf("Insira um número: ");
	scanf("%d", &n1);
	
	if(n1 == 0) // Verificar se o número inserido é zero, já que não tem absoluto
		printf("Valor nulo\n");
	else // Todos os números exceto 0
		if(n1 < 0)
			printf("O resultado é: %d", n1 * (-1));
		else
			printf("O resultado é: %d", n1);
	
	return 0;
}

