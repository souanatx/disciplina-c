// 4 - Crie um programa que receba um c�digo num�rico entre 65 e 127 e
// imprima o caracter (char) que esse n�mero representa.

#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");

	int valor;
	
	cout << "Insira um c�digo do caracter: ";
	cin >> valor;
	
	cout << "\nO carater que tem valor " << valor << " � o: " << (char)valor;

	return 0;
}

