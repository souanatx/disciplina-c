#include <iostream> 
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");


// Exercicio 1 - Crie um programa que receba 2 n�meros inteiros e apresente o resultado das 4 opera��es poss�veis.

	int n1, n2, soma, subtracao, multiplicacao, modulo; 
	float divisao;
		
	cout << "Insira dois n�meros inteiros: ";
	cin >> n1 >> n2;
	
	soma = n1 + n2;
	subtracao = n1 - n2;
	divisao = (float)n1 / n2;
	multiplicacao = n1 * n2;
	modulo = n1 % n2;
	
	cout << "O resultado da soma de " << n1 << " com " << n2 << " � " << soma << endl;
	cout << "O resultado da subtra��o � " << subtracao << endl;
	cout << "O resultado da divis�o � " << divisao << endl;
	cout << "O resultado da multiplica��o � " << multiplicacao << endl;
	cout << "O resultado do m�dulo � " << modulo << endl;


// Exercicio 2 - Tente realizar e interpretar o seguinte c�lculo: 6%5. O que representa? Apresente o resultado no ecr�.

	int a;
	a = 6%5;
	cout << "\na = "  << a << endl;


// Exercicio 3 - Altere o programa anterior para verificar o c�lculo de dois operandos N1 e N2, recebidos do teclado.
// Juntei ao exercicio 1


// Exercicio 4 - Crie um programa que um c�digo num�rico entre 65 e 127 e imprima o caracter (char) que esse n�mero representa.	

	int numero;
	cout <<"\nInsira um n�mero inteiro entre 65 e 127: ";
	cin >> numero;
	cout << "Caracter correspondente ao n�mero introduzido = " << (char) (numero) << endl;
	
	

    return 0;
}
