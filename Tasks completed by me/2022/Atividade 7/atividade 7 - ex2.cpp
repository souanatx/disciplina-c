#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");


// Crie um programa que receba um n�mero indeterminado de valores at� o utilizador carregar em 0, apresentando a soma dos valores recebidos. 
	
	int num, soma = 0;
	
	cout << "M�QUINA PARA SOMAR TODOS OS VALORES INSERIDOS AT� CARREGAR EM 0" << endl;
	
	while (num != 0) 
	{
    cout << "Insira um n�mero: " << endl;
    cin >> num;
    if (num != 0)
    soma += num; 
	}
	
	cout << "A soma dos n�meros � " << soma << endl;
	
    return 0;
}
