#include <iostream>
#include <locale>

#define TAM 20

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

    char nome[TAM] = {}; // {} Limpar o espaço de memória que foi reservado
    char apelido[TAM] = {};
    
    printf("Insira o seu nome: ");
    fgets(nome, TAM, stdin);
    
    printf("O nome completo é: ");
    puts(nome);


    return 0;
}
