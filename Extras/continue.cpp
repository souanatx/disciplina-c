#include <iostream>
#include <locale>

using namespace std;

int main()
{
    int i, soma = 0;
    for(i = 1; i <= 100; i++)
    {
        if(i % 5 == 0)
            	continue; // continue é utilizado dentro de ifs que estão dentro de ciclos e servem para excluir algo
			soma = soma + 1;
    }
        printf("Soma: %d", soma);
    return 0;
}
