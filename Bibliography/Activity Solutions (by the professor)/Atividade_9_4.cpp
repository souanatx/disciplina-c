// Atividade 9.4
#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");

	int i, f=1, num;
	
	printf("Insira o número: ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		cout << f << " X " << i << " = " << f * i << endl;
		f = f * i;
	}
	 
	printf("O fatorial de %d é: %d",num,f);

	return 0;
}

