#include <iostream>
// 1 - Crie um programa que receba 2 n�meros inteiros e apresente o resultado das 4 opera��es poss�veis.
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
	cout << "O resultado da soma de " << n1 << " com " << n2 << " �: " << result << endl;

	result = n1 - n2;
	cout << "O resultado da subtra��o de " << n1 << " com " << n2 << " �: " << result << endl;

	result = n1 * n2;
	cout << "O resultado da multiplica��o de " << n1 << " com " << n2 << " �: " << result << endl;

	result = (float)n1 / n2;
	cout << "O resultado da divis�o de " << n1 << " por " << n2 << " �: " << result << endl;
	
	return 0;
}

