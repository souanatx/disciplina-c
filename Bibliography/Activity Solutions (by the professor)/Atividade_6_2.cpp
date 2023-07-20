#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");

	float n1,n2,n3, media;
	
	printf("Insira as 3 notas: ");
	scanf("%f%f%f", &n1,&n2,&n3);
	
	media = (n1+n2+n3)/3;
	
	if(media >= 9.5)
		printf("Aprovado, média: %.2f", media);
	else
		printf("Reprovado, média: %.2f", media);
	
	
	return 0;
}

