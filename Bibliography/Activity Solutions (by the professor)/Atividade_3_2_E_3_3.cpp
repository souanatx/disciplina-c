// 2 - Tente realizar e interpretar o seguinte c�lculo:
// 6%5. O que representa? Apresente o resultado no ecr�.
// 3 - Altere o programa anterior para verificar o c�lculo de 
// dois operandos N1 e N2, recebidos do teclado.

#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");

	int n1,n2, resto;

	cout << "Insira valor de n1 e n2: ";
	cin >> n1 >> n2;

	resto = n1 % n2;

	cout << "O resto da divis�o inteira de n1 por n2 �: " << n1 % n2; // Simbolo % representa operador que realiza o c�lculo do resto da divis�o inteira
	cout << "O quiciente da divis�o inteira de n1 por n2: " << (n1 - resto)/n2;

	return 0;
}

