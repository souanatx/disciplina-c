#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

int main()
{
	 setlocale (LC_ALL, "Portuguese");
	 
// Utilizando a estrutura "switch...case", crie um programa que receba 2 valores inteiros e solicite uma operação aritmética a realizar. Em função disso realize o respetivo cálculo. Se o utilizador não inseriu nenhuma operação válida, deverá ser enviada uma mensagem a referir isso mesmo.

int valor1, valor2;
char operacao;

cout << "Insira o primeiro valor: ";
cin >> valor1;
cout << "\nInsira o segundo valor: ";
cin >> valor2;
cout << "\nInsira a operação a ser realizada (+, -, * ou /): ";
cin >> operacao;

switch (operacao) {
	case '+':
		cout << valor1 + valor2 << endl;
		break;
	case '-':
		cout << valor1 - valor2 << endl;
		break;
	case '*':
		cout << valor1 * valor2 << endl;
		break;
    case '/':
		cout << valor1 / valor2 << endl;
		break;
    default:
		cout << "Operação inválida" << endl;
}

    return 0;
}
