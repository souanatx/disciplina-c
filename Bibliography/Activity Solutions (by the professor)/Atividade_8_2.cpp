// 8.2 - Crie um programa que leia idades, até ao utilizador inserir a idade 0. 
// No final imprima a percentagem de pessoas com idades < 18, entre 18 e 65 e > 65.
#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");

	int idade, cnt_menos_18 = 0, cnt_18_65 = 0, cnt_maior_65 = 0, cnt = 0;
	
	do
	{
		cnt++;
		cout << "Insira a idade: ";
		cin >> idade;
		if(idade < 18)
			cnt_menos_18++; // Não esquecer descontar idade = 0
		else // idade >= 18
			if(idade > 65)
				cnt_maior_65++;
			else // entre 18 e 65
				cnt_18_65++;
	}while(idade != 0);
	
	// Descontar a idade 0
	cnt_menos_18--;
	cnt--;
	
	cout << "\nPercentagem dos menores de 18:\t\t" << (float)(cnt_menos_18 * 100)/cnt;
	cout << "\nPercentagem entre 18 e 65:\t\t" << (float)(cnt_18_65 * 100)/cnt;
	cout << "\nPercentagem dos maiores de 65:\t\t" << (float)(cnt_maior_65 * 100)/cnt;
	
	

	return 0;
}

