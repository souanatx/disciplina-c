#include <iostream> 
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");


// Exerc�cio 1 - Imprima no ecr� o seu nome e sobrenome, em linhas diferentes com um avan�o � esquerda.
	cout << "\tAna\n" <<"\tTeixeira\n";


// Exerc�cio 2 - Crie um programa que mostre no ecr� um menu de op��es.  	
	cout << "\n";
	
	cout << "\tMENU\n";
	
	cout << "1 - Inserir\n" << "2 - Consultar\n" << "3 - Alterar\n" << "4 - Imprimir\n" << "0 - Sair\n";


// Exerc�cio 3 - Defina duas vari�veis do tipo inteiro, atribua �s mesmas os valores 10 e 20 e imprima as mesmas no ecr�.
	int x; 
	int y;
	
	x= 10, y = 20;
	
	cout << "X: " << x << "\nY: " << y;

	
// Exerc�cio 4 - programa que permita calcular a �rea de um quadrado (LXL), sendo o valor do lado = 3.5. 	
	int area, lado = 3.5;
		
	cout << "\nA �rea do quadrado � " << lado*2;


    return 0;
}
