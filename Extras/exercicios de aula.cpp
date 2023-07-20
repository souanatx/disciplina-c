#include <iostream>
#include <locale>
#include <cmath>
#include <cstring> // se fosse c++ seria uma biblioteca diferente

#define TAM 20

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

	
	char nome[TAM] = {}; // tam = tamanho. {}limpar o espa�o de mem�ria que foi reservado, ou seja, este array est� vazio
	char apelido[TAM];
	
	printf("Insira o seu nome e apelido: ");
	//scanf("%s%s", nome, apelido);
	fgets(nome, TAM, stdin);
	
	
	//printf("O nome completo �: %s %s", nome, apelido);
	//printf("\nO primeiro caracter do nome �: %c", nome [0]);
	//printf("\nO segundo caracter do nome �: %c", nome [1]);
	
	printf("O nome completo �: ");
	puts(nome);	
	
	printf("O tamanho da string inserida �: %d", strlen(nome)-1); //o carater extra � o enter, para compensar subtraimos logo 1
	
	strcpy(nome, "Jos�"); // copia uma string para outra, removendo o conte�do anterior
	printf("\nO conte�do da vari�vel nome �: %s", nome);

	strcat(nome, "Silva"); // junta uma string a outra
	printf("\nO conte�do da vari�vel nome �: %s", nome);	
	
	strcmp("Jos�","Jos�");
	printf("\nResultado da compara��o das strings: %d", strcmp);
	
	

// Exerc�cio 1 - programa que receba os dados de um produto, ID, nome, quantidade em stock, pre�o e apresente no ecr� os valores recbidos

	
	int id, quantidade_stock;
	float preco;
	char nome[20];
	
	printf("Insira o ID do produto: ");
	scanf("%d", &id);
		
	printf("Insira o nome do produto: ");
	scanf("%s", nome);
	
	printf("Insira a quantidade em stock do produto: ");
	scanf("%d", &quantidade_stock);
	
	printf("Insira o pre�o do produto: ");
	scanf("%f", &preco);
	
	printf("Os valores introduzidos foram: \n Nome: %s \n ID: %d \n Quantidade em stock: %d \n Pre�o: %.2f", nome, id, quantidade_stock, preco);


    return 0;
}
