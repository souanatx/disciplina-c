#include <iostream>
#include <locale>
#include <cstring>

#define TAM 20

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

    char nome[TAM] = {}; // {} Limpar o espaço de memória que foi reservado
    char apelido[TAM] = {};
    int cmp;
    char pass[10] = "abcd123";
    
    printf("Insira o seu nome: ");
    fgets(nome, TAM, stdin);
    
    printf("O nome completo é: ");
    puts(nome);
    
    printf("O tamanho da string inserida é: %d\n", strlen(nome)-1);
    
    strcpy(nome, "José");    // Copia uma string para outra (remove o conteúdo anterior)
    strcat(nome, " Silva"); // Junta uma string a outra
    cout << nome;
    cmp = strcmp(pass,"abcd");
    
    printf("\nResultado da comparação das strings: %d", cmp);
    
    //printf("\nO conteúdo da variável nome é: %s", nome);

    return 0;
}
