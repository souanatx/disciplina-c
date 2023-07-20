#include <iostream>
// 1 - Crie um programa que receba 2 números inteiros e apresente o resultado das 4 operações possíveis.
#include <locale>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");

	int n1, n2;
	float result;
	
	cout << "insira os dois valores: ";
	cin >> n1 >> n2;
	
	result = n1 + n2;
	cout << "O resultado da soma de " << n1 << " com " << n2 << " é: " << result << endl;

	result = n1 - n2;
	cout << "O resultado da subtração de " << n1 << " com " << n2 << " é: " << result << endl;

	result = n1 * n2;
	cout << "O resultado da multiplicação de " << n1 << " com " << n2 << " é: " << result << endl;

	result = (float)n1 / n2;
	cout << "O resultado da divisão de " << n1 << " por " << n2 << " é: " << result << endl;
	
	return 0;
}

