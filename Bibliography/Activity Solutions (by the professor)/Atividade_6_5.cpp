#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");

    int ano;

    cout << "Insira o ano: ";
    cin >> ano;

    if((ano % 4 == 0 && ano % 100 == 0 && ano % 400 == 0) || ((ano % 4 == 0) && (ano % 100 != 0)))
        cout << "� bissexto" << endl;
    else
        cout << "N�o � bissexto" << endl;

	return 0;
}

