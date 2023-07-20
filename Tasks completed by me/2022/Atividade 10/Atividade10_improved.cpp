#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

int main()
{
	 setlocale (LC_ALL, "Portuguese");
	 
// Utilizando a estrutura "switch...case", crie um programa que receba 2 valores inteiros e solicite uma opera��o aritm�tica a realizar. Em fun��o disso realize o respetivo c�lculo. Se o utilizador n�o inseriu nenhuma opera��o v�lida, dever� ser enviada uma mensagem a referir isso mesmo.

int valor1, valor2;
char operacao;
bool continuar = true;

cout << "\t\t\t\tCALCULADORA" << endl;
cout << "\t\t\tInsira x para terminar o programa" << endl;

while (continuar) {
	cout << "\nInsira o primeiro valor: ";
	cin >> valor1;
	cout << "\nInsira o segundo valor: ";
	cin >> valor2;
	cout << "\nInsira a opera��o a ser realizada (+, -, * ou /): ";
	cin >> operacao;

	switch (operacao) {
		case '+':
			cout << "\nResultado = " << valor1 + valor2 << endl;
			break;
		case '-':
			cout << "\nResultado = " << valor1 - valor2 << endl;
			break;
		case '*':
			cout << "\nResultado = " << valor1 * valor2 << endl;
			break;
    	case '/':
			cout << "\nResultado = " << valor1 / valor2 << endl;
			break;
		case 'x':
			continuar = false;
			break;
		default:
			cout << "\nOpera��o inv�lida" << endl;
	}
}
    return 0;
}
