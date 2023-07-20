#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

// Exerc�cio 1 - Programa que calcula a Energia produzida pela massa em kg(recebida do teclado)
	
	const int c = 300000;
	int e, m;
	cout << "\tPrograma para c�lculo da Energia produzida por dada massa de acordo com a equa��o de Albert Einstein";
	cout << "\nInsira a massa em kg: ";
	cin >> m;
	e = (m*c)^2;
	cout << "Energia produzida = " << e << endl;
	
	

// Exerc�cio 2 - Crie um programa que receba o valor em dias e converta para, anos, meses, dias, tendo por base um ano de 365 dias e um m�s de 30 dias.
	int x, anos, meses, dias;
	cout <<"\n";
	cout << "\tPrograma para convers�o de dias";
	cout << "\nInsira os dias: ";
	cin >> x; 
	anos = x/365; 
	meses = (x%365)/30;
	dias = (x%365)%30;
	cout << x << " dias equivalem a " << anos << " ano(s), " << meses << " mes(es), " << dias << " dia(s)." << endl;
    

// Exerc�cio 3 - Utilizando as fun��es printf e scanf, crie um programa que que converta quil�metros por hora em milhas por hora
	float km, milhas;
	printf("\n");
	printf("\tConversor de kms/h para milhas/h");
	printf("\nInsira o n�mero de kms por hora: ");
	scanf("%f", &km);
	milhas = km * 0.62;
	printf("\t\tResultado = %.2f\n", milhas); 
		

    return 0;
}
