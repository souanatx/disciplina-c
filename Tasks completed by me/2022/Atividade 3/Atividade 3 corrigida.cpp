#include <iostream> 
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");


// Exercicio 1 - Crie um programa que receba 2 números inteiros e apresente o resultado das 4 operações possíveis.

	int n1, n2, soma, subtracao, multiplicacao, modulo; 
	float divisao;
		
	cout << "Insira dois números inteiros: ";
	cin >> n1 >> n2;
	
	soma = n1 + n2;
	subtracao = n1 - n2;
	divisao = (float)n1 / n2;
	multiplicacao = n1 * n2;
	modulo = n1 % n2;
	
	cout << "O resultado da soma de " << n1 << " com " << n2 << " é " << soma << endl;
	cout << "O resultado da subtração é " << subtracao << endl;
	cout << "O resultado da divisão é " << divisao << endl;
	cout << "O resultado da multiplicação é " << multiplicacao << endl;
	cout << "O resultado do módulo é " << modulo << endl;


// Exercicio 2 - Tente realizar e interpretar o seguinte cálculo: 6%5. O que representa? Apresente o resultado no ecrã.

	int a;
	a = 6%5;
	cout << "\na = "  << a << endl;


// Exercicio 3 - Altere o programa anterior para verificar o cálculo de dois operandos N1 e N2, recebidos do teclado.
// Juntei ao exercicio 1


// Exercicio 4 - Crie um programa que um código numérico entre 65 e 127 e imprima o caracter (char) que esse número representa.	

	int numero;
	cout <<"\nInsira um número inteiro entre 65 e 127: ";
	cin >> numero;
	cout << "Caracter correspondente ao número introduzido = " << (char) (numero) << endl;
	
	

    return 0;
}
