#include <iostream>
#include <locale>

using namespace std;

#define TAM 5

int somaVetor(int []); // parenteses retos significa que não vou passar uma variável normal. Declara a passagem de um array de inteiros!

int main()
{
	setlocale (LC_ALL, "Portuguese");
	int nums[MAX], i;
	//int soma = 0;
	for (i = 0; i < TAM; i++)
	{
		cout << "Insira um número para o vetor: " << endl;
		cin >> nums [i];
		//soma = soma + nums[i];
	}
	
	cout << "A soma é " << somaVetor(nums);
	
	return 0;
}

int somaVetor (int v[])
{
	int i, soma = 0;
	for(i = 0; i < TAM; i++)
	{
		soma = soma + v[i];
	}
	return soma;
}
