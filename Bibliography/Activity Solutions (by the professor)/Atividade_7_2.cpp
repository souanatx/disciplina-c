// 7.2 - Crie um programa que receba um número indeterminado de valores 
// até o utilizador carregar em 0, apresentando a soma dos valores recebidos. 
#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");

	int num, soma;

	while (num != 0)
	{
		cout << "Insira um número: ";
		cin >> num;
		soma = soma + num;
	}
	
	cout << "A soma é: " << soma;

	return 0;
}

