#include <iostream>
#include <locale>
#include <cstring>

#define TAM 20

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

    char nome[TAM] = {}; // {} Limpar o espa�o de mem�ria que foi reservado
    char apelido[TAM] = {};
    int cmp;
    char pass[10] = "abcd123";
    
    printf("Insira o seu nome: ");
    fgets(nome, TAM, stdin);
    
    printf("O nome completo �: ");
    puts(nome);
    
    printf("O tamanho da string inserida �: %d\n", strlen(nome)-1);
    
    strcpy(nome, "Jos�");    // Copia uma string para outra (remove o conte�do anterior)
    strcat(nome, " Silva"); // Junta uma string a outra
    cout << nome;
    cmp = strcmp(pass,"abcd");
    
    printf("\nResultado da compara��o das strings: %d", cmp);
    
    //printf("\nO conte�do da vari�vel nome �: %s", nome);

    return 0;
}
