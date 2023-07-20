#include <iostream>
#include <locale>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

	int i = 1, j = 1;
	char tecla = 'c';
	
	cout << "\n **** WHILE ****\n";
	while ( i <= 10 )  // serve para não repetir código, se quero a mesma coisa por exemplo 9 vezes faço while i < 10, se quiser 10 faço i <= 10.
	{
		cout << "O valor de i é: " << i << endl; // se não fizer o i variar o loop é infinito
		i++; // igual a colocar: i = i + 1.
	}
	
	/* 
	para comentar paragráfos inteiros
	*/
	cout << "\n **** WHILE ****\n";
	do 
	{
		cout << "O valor de j é: " << j << endl;
		j++;
	}
	while (j <= 10);
	
	
	

    return 0;
}
