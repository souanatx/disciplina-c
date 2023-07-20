#include <iostream>
#include <locale>
#include <cstring>

#define TAM 40

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");
	
// Exerc�cio 1 - Dadas as strings  "Programar" e " em C", recebidas do teclado, escreva um programa que: Guarde as strings originais em duas c�pias, str1 e str2.
	
	char st1[TAM], st2[TAM], str1[TAM], str2[TAM], strtemp[TAM];
	printf("Insira 2 strings. A primeira � �Programar�: ");
	fgets(st1, TAM, stdin);
	printf("Insira a segunda string que � � em C�: ");
	fgets(st2, TAM, stdin);
	
	st1[strlen(st1) - 1] = '\0' ; //  Para substituir o enter recebido pelo carater de fim de string coloquei o carater de fim de string que � \0
	st2[strlen(st2) - 1] = '\0' ; 
	
	strcpy(str1, st1);
	strcpy(str2, st2);
	
	//printf("Tamanho de st1 %d", strlen(st1));

	printf("As strings inseridas foram: %s%s", st1, st2);


// Exerc�cio 2 - Junte a string str2 � str1
	
	strcat(str1, str2);
	printf("\nstr1: %s\n", str1); 
	
	//Para separar:
	str1[strlen(st1)] = '\0' ;	

// Exerc�cio 3 - Troque o conte�do das duas strings
	
	strcpy(strtemp, str1);
	strcpy(str1, str2);
	strcpy(str2, strtemp);
	
	printf("\nstr1: %s \nstr2: %s", str1, str2);


// Exerc�cio 4 - Escreva um programa em C para comparar as duas strings str1 e str2, originais.
	
	printf("\nResultado da compara��o das strings �%s� e �%s�: %d", st1, st2, strcmp(st1,st2));
    
    
    return 0;
}
