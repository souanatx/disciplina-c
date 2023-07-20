// 7.3 - Crie um programa que receba 10 números e apresente o maior deles.

#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");

	int i = 1, num, maior = 0;
	
	while(i <= 10)
	{
		cout << "Insira um número: ";
		cin >> num;
		if(num > maior)
			maior = num;
		i++;
	}

	cout << "O maior é: " << maior;

	return 0;
}

