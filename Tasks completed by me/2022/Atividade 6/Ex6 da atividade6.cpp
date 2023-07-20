#include <iostream>
#include <locale>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

// Exercício 6 - Escreva um programa em C para ler o ano de nascimento de um candidato e determinar se ele é elegível para votar (Verifique apenas o ano de nascimento e o ano corrente).

	int ano_nascimento, idade;
	int ano_atual;
	
	cout << "Introduza o seu ano de nascimento: " << endl;
	cin >> ano_nascimento;
	
	ano_atual = 2022;
	idade = ano_atual - ano_nascimento;
	
	if(idade >= 18)
	{
		cout << "Tem direito a voto!";
	}
	else
	{
		cout << "Não tem direito a voto.";		
	}

	
    return 0;
}
