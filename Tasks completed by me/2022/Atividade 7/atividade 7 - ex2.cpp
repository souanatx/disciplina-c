#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");


// Crie um programa que receba um número indeterminado de valores até o utilizador carregar em 0, apresentando a soma dos valores recebidos. 
	
	int num, soma = 0;
	
	cout << "MÁQUINA PARA SOMAR TODOS OS VALORES INSERIDOS ATÉ CARREGAR EM 0" << endl;
	
	while (num != 0) 
	{
    cout << "Insira um número: " << endl;
    cin >> num;
    if (num != 0)
    soma += num; 
	}
	
	cout << "A soma dos números é " << soma << endl;
	
    return 0;
}
