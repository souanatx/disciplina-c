#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	int n1;
	
	printf("Insira um n�mero: ");
	scanf("%d", &n1);
	
	if(n1 == 0) // Verificar se o n�mero inserido � zero, j� que n�o tem absoluto
		printf("Valor nulo\n");
	else // Todos os n�meros exceto 0
		if(n1 < 0)
			printf("O resultado �: %d", n1 * (-1));
		else
			printf("O resultado �: %d", n1);
	
	return 0;
}

