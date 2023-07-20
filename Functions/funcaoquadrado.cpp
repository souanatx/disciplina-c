//Escreva um programa em C para encontrar o quadrado de qualquer número usando uma função

#include <iostream>
#include <locale>

using namespace std;

int quadrado(int);

int main() 
{
	setlocale(LC_ALL, "Portuguese");
    int num, resultado;
    printf("Insira um número: ");
    scanf("%d", &num);
    resultado = quadrado(num);
    printf("O quadrado de %d é %d", num, resultado);
    return 0;
}

int quadrado (int num) 
{
    return num * num;
}
