#include <iostream>
#include <locale>
#include <cmath>
#include <cstring> // se fosse c++ seria uma biblioteca diferente

#define TAM 20

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

	
	char nome[TAM] = {}; // tam = tamanho. {}limpar o espaço de memória que foi reservado, ou seja, este array está vazio
	char apelido[TAM];
	
	printf("Insira o seu nome e apelido: ");
	//scanf("%s%s", nome, apelido);
	fgets(nome, TAM, stdin);
	
	
	//printf("O nome completo é: %s %s", nome, apelido);
	//printf("\nO primeiro caracter do nome é: %c", nome [0]);
	//printf("\nO segundo caracter do nome é: %c", nome [1]);
	
	printf("O nome completo é: ");
	puts(nome);	
	
	printf("O tamanho da string inserida é: %d", strlen(nome)-1); //o carater extra é o enter, para compensar subtraimos logo 1
	
	strcpy(nome, "José"); // copia uma string para outra, removendo o conteúdo anterior
	printf("\nO conteúdo da variável nome é: %s", nome);

	strcat(nome, "Silva"); // junta uma string a outra
	printf("\nO conteúdo da variável nome é: %s", nome);	
	
	strcmp("José","José");
	printf("\nResultado da comparação das strings: %d", strcmp);
	
	

// Exercício 1 - programa que receba os dados de um produto, ID, nome, quantidade em stock, preço e apresente no ecrã os valores recbidos

	
	int id, quantidade_stock;
	float preco;
	char nome[20];
	
	printf("Insira o ID do produto: ");
	scanf("%d", &id);
		
	printf("Insira o nome do produto: ");
	scanf("%s", nome);
	
	printf("Insira a quantidade em stock do produto: ");
	scanf("%d", &quantidade_stock);
	
	printf("Insira o preço do produto: ");
	scanf("%f", &preco);
	
	printf("Os valores introduzidos foram: \n Nome: %s \n ID: %d \n Quantidade em stock: %d \n Preço: %.2f", nome, id, quantidade_stock, preco);


    return 0;
}
