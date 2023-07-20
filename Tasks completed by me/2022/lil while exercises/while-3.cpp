#include <iostream>
#include <locale>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

	int op;
	
	cout << "\n **** WHILE ****\n";
	while ( op != 4)
	{
		cout << "1 - Inserir" << endl;
		cout << "2 - Consultar" << endl;
		cout << "3 - Alterar" << endl;
		cout << "4 - Sair" << endl;
		cout << "Escolha a opção desejada: \n" << endl;
		cin >> op;
		system("cls"); //clearscreen serve para limpar a consola
		system("pause");//para parar o programa num determinado local
	}
	
	cout << "\n **** DO WHILE ****\n";
	do
	{
		cout << "1 - Inserir" << endl;
		cout << "2 - Consultar" << endl;
		cout << "3 - Alterar" << endl;
		cout << "4 - Sair" << endl;
		cout << "Escolha a opção desejada: \n" << endl;
		cin >> op;
		system("cls");
	}
	while (op != 4);
	
	

    return 0;
}
