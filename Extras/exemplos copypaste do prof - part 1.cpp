#include <iostream>
#include <locale>

#define TAM 20

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

    char nome[TAM] = {}; // {} Limpar o espa�o de mem�ria que foi reservado
    char apelido[TAM] = {};
    
    printf("Insira o seu nome: ");
    fgets(nome, TAM, stdin);
    
    printf("O nome completo �: ");
    puts(nome);


    return 0;
}
