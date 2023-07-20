#include <iostream> 
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

//Programa 1 - Crie um programa que receba dois números inteiros do teclado, guarde os mesmos em duas variáveis diferentes, some os dois números e imprima o resultado no ecrã
	int resultado;
	int N1; 
	int N2;
	
	N1 = 1, N2 = 2;
		
	cout << "O resultado de N1 + N2 é " << (N1 + N2);
	
	
//Programa 2 - Crie um programa que receba do teclado um valor de temperatura em graus Celsius e converta para Fahrenheit, imprimindo o resultado da conversão no ecrã.
	float C, F;
	
	cout << "\nInsira os graus Celsius para converter para Fahrenheit: " << endl;
	cin >> C;
	F = 1.8*C+32;
	cout << "O resultado é: " << F;
	
	
//Programa 3 - Crie um programa que receba os dados do user e calcule o IMC baseado na fórmula.
	float IMC, peso, altura;
	
	cout << "\nInsira o seu peso em kg: " << endl;
	cin >> peso;
	
	cout << "Insira a sua altura em cm: " << endl;
	cin >> altura;
	
	IMC = peso/(altura*altura);
	
	cout << "O seu IMC é " << IMC;
	
	
//Programa 4 - Crie um programa que troque os valores de duas variáveis inteiras recebidas do utilizador e imprima os novos valores.
	int aux, x, y;
	
	cout << "\nInsira um número qualquer: " << endl;
	cin >> x;
	
	cout << "Insira outro número: " << endl;
	cin >> y;
	
	aux = x;
	x = y;
	y = aux;
	
	cout << "Primeiro valor: " << x;
	
	cout << "\nSegundo valor: " << y;

	

    return 0;
}
