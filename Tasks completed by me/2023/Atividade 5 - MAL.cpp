#include <iostream>
#include <locale>
#include <cstring>

#define TAM 20

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");


// Exerc�cio 1 - Dadas as strings  "Programar" e " em C", recebidas do teclado, escreva um programa que: Guarde as strings originais em duas c�pias, str1 e str2.
    char str1[TAM];  
    char str2[TAM];
   
    printf("Insira 2 strings, sendo a primeira �Programar� e, depois de clicar enter, a segunda �em C�: ");
    fgets(str1, TAM, stdin);
    fgets(str2, TAM, stdin);
    printf("\nAs strings inseridas foram: ");
	puts(str1);
	puts(str2);
//	strcpy(srt1);
//	strcpy(srt2); n�o compreendi o erro portanto coloquei assim em coment�rio
	
	
// Exerc�cio 2 - Junte a string str2 � str1

	strcat(str1, str2);
	printf("\nAs strings inseridas foram: %s\n", str1); 
		
	
// Exerc�cio 3 - Troque o conte�do das duas strings
	
	swap(str1, str2);
	printf("\nA primeira string � �%s�, a segunda � �%s�", str1, str2);
	

// Exerc�cio 4 - Escreva um programa em C para comparar as duas strings str1 e str2, originais.
	
	int comp;
	swap(str1, str2);
	comp = strcmp(str1,str2);
	printf("\nResultado da compara��o das strings �%s� e �%s�: %d", str1, str2, comp);
	

    return 0;
}
