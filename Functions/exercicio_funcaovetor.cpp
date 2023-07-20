// Crie uma fun��o que retorne o maior elemento de um �vetor�, passando o mesmo por par�metro � fun��o.

#include <iostream>
#include <locale>

using namespace std;

#define TAM 5

int somaVetor(int []); // Declara a passagem de um array de inteiros "[]"
int maiorNumVetor(int []);

int main()
{
    setlocale (LC_ALL, "Portuguese");

    int nums[TAM], i;

    for(i = 0; i < TAM; i++)
    {
        cout << "Insira um n�mero para o vetor: " << endl;
        cin >> nums[i];
    }

    cout << "A soma �: " << somaVetor(nums) << endl; // Passagem do vetor � fun��o soma
    cout << "O maior elemento do vetor �: " << maiorNumVetor(nums);

    return 0;
}

int somaVetor(int v[])
{
    int i, soma = 0;    
    for(i = 0; i < TAM; i++)
    {
        soma = soma + v[i];
    }
    return soma;
}

int maiorNumVetor(int v[])
{
    int i, maior = 0;    
    for(i = 0; i < TAM; i++)
    {
        if(v[i] > maior)
            maior = v[i];
    }
    return maior;
}

