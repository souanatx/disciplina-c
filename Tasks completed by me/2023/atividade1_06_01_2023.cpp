#include <iostream>
#include <locale>

using namespace std;

int main()
{
//Crie um programa que receba um n�mero do utilizador e mostre a tabuada desse n�mero. Exemplo: dado o n�mero 2, dever� ser mostrado 2x1=2, 2x2=4,...

	int num;
	cout << "\t\tTABUADA" << endl;
	cout << "Insira um n�mero: ";
	cin >> num;

	for (int i = 1; i <= 10; i++) {
		cout << num << "x" << i << "=" << num * i << endl;
	}

 return 0;
}
