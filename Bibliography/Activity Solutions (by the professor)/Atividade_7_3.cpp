// 7.3 - Crie um programa que receba 10 n�meros e apresente o maior deles.

#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");

	int i = 1, num, maior = 0;
	
	while(i <= 10)
	{
		cout << "Insira um n�mero: ";
		cin >> num;
		if(num > maior)
			maior = num;
		i++;
	}

	cout << "O maior �: " << maior;

	return 0;
}

