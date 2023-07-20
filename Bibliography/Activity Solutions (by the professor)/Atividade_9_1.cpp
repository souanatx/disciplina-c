// Atividade 9.1
#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");

    int  i, soma = 0;

    printf("Os números são: \n");
 
    for (i = 1; i <= 10; i++)
    {
        soma = soma + i;
        printf("%d ",i);
    }
    
    printf("\nA soma é: %d", soma);

	return 0;
}

