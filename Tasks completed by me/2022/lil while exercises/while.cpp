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
	while ( i <= 10 )  // serve para n�o repetir c�digo, se quero a mesma coisa por exemplo 9 vezes fa�o while i < 10, se quiser 10 fa�o i <= 10.
	{
		cout << "O valor de i �: " << i << endl; // se n�o fizer o i variar o loop � infinito
		i++; // igual a colocar: i = i + 1.
	}
	
	/* 
	para comentar paragr�fos inteiros
	*/
	cout << "\n **** WHILE ****\n";
	do 
	{
		cout << "O valor de j �: " << j << endl;
		j++;
	}
	while (j <= 10);
	
	
	

    return 0;
}
