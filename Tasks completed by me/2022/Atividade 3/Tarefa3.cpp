#include <iostream> 
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

//Programa 1 - Crie um programa que receba dois n�meros inteiros do teclado, guarde os mesmos em duas vari�veis diferentes, some os dois n�meros e imprima o resultado no ecr�
	int resultado;
	int N1; 
	int N2;
	
	N1 = 1, N2 = 2;
		
	cout << "O resultado de N1 + N2 � " << (N1 + N2);
	
	
//Programa 2 - Crie um programa que receba do teclado um valor de temperatura em graus Celsius e converta para Fahrenheit, imprimindo o resultado da convers�o no ecr�.
	float C, F;
	
	cout << "\nInsira os graus Celsius para converter para Fahrenheit: " << endl;
	cin >> C;
	F = 1.8*C+32;
	cout << "O resultado �: " << F;
	
	
//Programa 3 - Crie um programa que receba os dados do user e calcule o IMC baseado na f�rmula.
	float IMC, peso, altura;
	
	cout << "\nInsira o seu peso em kg: " << endl;
	cin >> peso;
	
	cout << "Insira a sua altura em cm: " << endl;
	cin >> altura;
	
	IMC = peso/(altura*altura);
	
	cout << "O seu IMC � " << IMC;
	
	
//Programa 4 - Crie um programa que troque os valores de duas vari�veis inteiras recebidas do utilizador e imprima os novos valores.
	int aux, x, y;
	
	cout << "\nInsira um n�mero qualquer: " << endl;
	cin >> x;
	
	cout << "Insira outro n�mero: " << endl;
	cin >> y;
	
	aux = x;
	x = y;
	y = aux;
	
	cout << "Primeiro valor: " << x;
	
	cout << "\nSegundo valor: " << y;

	

    return 0;
}
