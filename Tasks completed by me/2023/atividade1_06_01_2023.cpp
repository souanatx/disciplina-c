#include <iostream>
#include <locale>

using namespace std;

int main()
{
//Crie um programa que receba um número do utilizador e mostre a tabuada desse número. Exemplo: dado o número 2, deverá ser mostrado 2x1=2, 2x2=4,...

	int num;
	cout << "\t\tTABUADA" << endl;
	cout << "Insira um número: ";
	cin >> num;

	for (int i = 1; i <= 10; i++) {
		cout << num << "x" << i << "=" << num * i << endl;
	}

 return 0;
}
