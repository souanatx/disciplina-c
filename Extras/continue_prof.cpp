// Programa que soma os números, de 1 a 100, exceto os múltiplos de 5.
#include <iostream>
#include <locale>

using namespace std;

int main()
{
    int i, soma = 0;
    for(i=1; i<=100 ; i++)
    {
          if(i % 5 == 0)
                   continue;
        soma = soma + i;
    }
    printf("Soma %d", soma);
    return 0;
}
