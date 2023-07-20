#include <iostream>
#include <locale>

using namespace std;

int main()
{
        int i;
        for(i = 1; i <= 1000000; i++)
        {
            if((i % 11 == 0) && (i % 13 == 0) && (i % 17 == 0))
                break; // O break serve para terminar o ciclo quando encontramos o valor pretendido
        }
        printf("O numero e: %d", i);
}
