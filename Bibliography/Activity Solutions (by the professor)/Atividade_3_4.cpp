// 4 - Crie um programa que receba um código numérico entre 65 e 127 e
// imprima o caracter (char) que esse número representa.

#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");

	int valor;
	
	cout << "Insira um código do caracter: ";
	cin >> valor;
	
	cout << "\nO carater que tem valor " << valor << " é o: " << (char)valor;

	return 0;
}

