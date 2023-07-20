// Atividade 9.3
#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");

	int i,j,ln;
	
	printf("Escolha o número de linhas que pretende: ");
	scanf("%d",&ln);
	
	for(i=1;i<=ln;i++)
	{
		for(j=1;j<=i;j++)
	   		printf("%d ",j);
		printf("\n");
	}
	
	return 0;
	
}

