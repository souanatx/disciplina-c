#include <iostream>
#include <locale>

#define TAM 5 // Declara uma constante

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");

	float notas[TAM]; // declarar um array de 10 float
	int i, soma = 0;

	// Ciclo para ler as 10 notas
	for (i = 0; i < TAM; i++)
	{
		cout << "Insira a nota: " << i + 1 << endl;
		cin >> notas[i];
		soma = soma + notas[i];
	}

	cout << "\n\n*** As notas recebidas foram: ***\n\n";
	// Ciclo para mostrar as 10 notas recebidas
	for (i = 0; i < TAM; i++)
	{
		cout << "Nota " << i + 1 << " -> " << notas[i] << endl;
	}
	
	cout << "\nA média é: " << soma / TAM;

	return 0;
}

