#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

// Exercício 1 - Programa que calcula a Energia produzida pela massa em kg(recebida do teclado)
	
	const int c = 300000;
	int e, m;
	cout << "\tPrograma para cálculo da Energia produzida por dada massa de acordo com a equação de Albert Einstein";
	cout << "\nInsira a massa em kg: ";
	cin >> m;
	e = (m*c)^2;
	cout << "Energia produzida = " << e << endl;
	
	

// Exercício 2 - Crie um programa que receba o valor em dias e converta para, anos, meses, dias, tendo por base um ano de 365 dias e um mês de 30 dias.
	int x, anos, meses, dias;
	cout <<"\n";
	cout << "\tPrograma para conversão de dias";
	cout << "\nInsira os dias: ";
	cin >> x; 
	anos = x/365; 
	meses = (x%365)/30;
	dias = (x%365)%30;
	cout << x << " dias equivalem a " << anos << " ano(s), " << meses << " mes(es), " << dias << " dia(s)." << endl;
    

// Exercício 3 - Utilizando as funções printf e scanf, crie um programa que que converta quilômetros por hora em milhas por hora
	float km, milhas;
	printf("\n");
	printf("\tConversor de kms/h para milhas/h");
	printf("\nInsira o número de kms por hora: ");
	scanf("%f", &km);
	milhas = km * 0.62;
	printf("\t\tResultado = %.2f\n", milhas); 
		

    return 0;
}
