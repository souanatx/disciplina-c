//Dados 3 n�meros a uma fun��o, retorne o menor desses n�meros.

#include <iostream>
#include <locale>

using namespace std;

int menor(int, int, int);

int main() 
{
	setlocale(LC_ALL, "Portuguese");
    int num1, num2, num3, resultado;
    printf("Introduza 3 n�meros: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    resultado = menor(num1, num2, num3);
    printf("O menor n�mero introduzido foi %d", resultado);
    return 0;
}

int menor(int num1, int num2, int num3) 
{
    int menor;
	menor = num1;
    if(num2 < menor) {
    menor = num2;
    }
    if(num3 < menor) {
	menor = num3;
    }
    return menor;
}
