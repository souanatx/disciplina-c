// 7.1 - Crie um programa que receba 5 temperaturas e apresente a média das mesmas. 
#include <iostream> 
#include <locale>

using namespace std; 

int main() {
	
	setlocale (LC_ALL, "Portuguese");

	float temp, soma = 0, media;
	int i = 1;
	
	while(i < 6)
	{
		printf("Insira a temperatura: ");
		scanf("%f", &temp);
		soma = soma + temp;
		i++;
	}
	
	media = soma / (i - 1);
	
	printf("A média é: %.1f", media);
		
	return 0;
}	
