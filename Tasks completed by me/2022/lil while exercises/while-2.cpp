#include <iostream>
#include <locale>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

	int i = 1, j = 1;
	char tecla = 'a';
	
	/*cout << "\n **** WHILE ****\n";
	while ( tecla == 'c')
	{
		cout << "Entrou no while\n";
	}
	cout << "\n **** DO WHILE ****\n";
	do
	{
		cout << "Entrou no do while\n";
	}
	while (tecla == 'c');
	*/
	
	cout << "\n **** WHILE ****\n";
	while ( tecla != 's') 		// se a condição for falsa, não entra no ciclo
	{
		cout << 2*5;
		cout << "\nPretende sair (s)?" << endl;
		cin >> tecla;
	}
	cout << "\n **** DO WHILE ****\n";
	do				// mesmo com condição falsa, entra pelo menos uma vez no ciclo (o que pode ser util quando tenho um menu de opçoes e quero mostrar); o do while só testa o valor no fim e portanto testa pelo menos uma vez enquanto que o while testa logo no inicio.
	{
		cout << 2*5;
		cout << "\nPretende sair (s)?" << endl;
		cin >> tecla;
	}
	while (tecla != 's');

    return 0;
}
