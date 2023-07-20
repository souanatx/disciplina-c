#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

//Escreva um programa em C para encontrar a soma dos 10 primeiros números naturais (1-10)

	int x, soma = 0; 
	printf ("Os números são:");
	for (x = 1; x <= 10; x++) 
	{
    soma += x;
    printf("\n%d", x);
	}
	printf ("\nA soma dos 10 primeiros números naturais é: %d\n", soma);

//Escreva um programa que verifique se um número é primo. Nota: para ser "primo" um número apenas pode ser dividido por ele próprio e por 1, ou seja só tem 2 divisores.

	int num, y, cnt = 0;
    printf ("\nInsira um número: ");
    scanf ("%d", &num);
    for (y =2; y <= num/2; y++){
    	if(num%1 == 0){
    		cnt++;
    		break; //serve para quebrar um ciclo antes dele chegar ao limite
		}
	}
	if (cnt == 0 && num != 1)
		printf ("\n%d é primo", num);
	else
		printf ("\n%d não é primo", num);

//Escreva um programa em C para mostrar um padrão como triângulo de ângulo reto com um número.

	int z, j, ln;
	printf ("\nEscolha o número de linhas que pretende: ");
	scanf ("%d", &ln);
	for (z = 1; z <= ln; z++)
	{
		printf ("\nLinha: %d", z);
		for (j=1; j<=z; j++)
			printf ("%d", j);
		printf ("\n");
	}
	
//Escreva um programa em C para calcular o fatorial de um determinado número.

	int numero, i, fatorial = 1; //se colocassemos o fatorial como valendo 0 seria sempre absorvida a multiplicação
	
	printf("\nInsira um número: ");
	scanf("%d", &numero);
	
	for (i = 1; i <= num; i++)
	{
		cout << fatorial << " X " << i << " = " << fatorial * i << endl;
		fatorial = fatorial * i;
		//cout << fatorial << endl;
	}	
	printf("O fatorial de %d é: %d", numero, fatorial);

//Escreva um programa em C para mostrar os primeiros n termos (dado pelo utilizador) da série de Fibonacci. 
	
	int penultimo = 0, ultimo = 1, ntermos, a, termo;
	
  	printf("\nNúmero de termos da série de Fibonacci = ");
  	scanf("%d", &ntermos);
	printf("\nSérie de Fibonacci até aos %d termos: ", ntermos);
	printf("%d %d ", penultimo, ultimo);
	
	for (a = 3; a <= ntermos; a++)
	{
	    termo = penultimo + ultimo;
	    printf("%d ", termo);
	    penultimo = ultimo;
	    ultimo = termo;
  	}

    return 0;
}
