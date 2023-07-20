// Crie uma função que retorne o maior elemento de um “vetor”, passando o mesmo por parâmetro à função.

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
        cout << "Insira um número para o vetor: " << endl;
        cin >> nums[i];
    }

    cout << "A soma é: " << somaVetor(nums) << endl; // Passagem do vetor à função soma
    cout << "O maior elemento do vetor é: " << maiorNumVetor(nums);

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

