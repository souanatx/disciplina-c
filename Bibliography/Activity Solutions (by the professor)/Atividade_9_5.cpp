// Atividade 9.5
#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");

	int pen = 0, ult = 1, termo, i, n;
	
	printf("Insira o n�mero: ");
	scanf("%d",&n);
	printf("S�rie de Fibonacci at� aos %d termos:",n);
	printf("%d %d ",pen,ult);
	
	for(i = 3;i <= n;i++)
	{
		termo = pen + ult;
		printf("%d ",termo);
		pen = ult;
		ult = termo;
	}

	return 0;
}

