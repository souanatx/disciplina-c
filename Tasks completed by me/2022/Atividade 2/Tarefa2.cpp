#include <iostream> 
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");


// Exercício 1 - Imprima no ecrã o seu nome e sobrenome, em linhas diferentes com um avanço à esquerda.
	cout << "\tAna\n" <<"\tTeixeira\n";


// Exercício 2 - Crie um programa que mostre no ecrã um menu de opções.  	
	cout << "\n";
	
	cout << "\tMENU\n";
	
	cout << "1 - Inserir\n" << "2 - Consultar\n" << "3 - Alterar\n" << "4 - Imprimir\n" << "0 - Sair\n";


// Exercício 3 - Defina duas variáveis do tipo inteiro, atribua às mesmas os valores 10 e 20 e imprima as mesmas no ecrã.
	int x; 
	int y;
	
	x= 10, y = 20;
	
	cout << "X: " << x << "\nY: " << y;

	
// Exercício 4 - programa que permita calcular a área de um quadrado (LXL), sendo o valor do lado = 3.5. 	
	int area, lado = 3.5;
		
	cout << "\nA área do quadrado é " << lado*2;


    return 0;
}
