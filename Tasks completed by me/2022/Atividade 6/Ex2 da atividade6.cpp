#include <iostream>
#include <locale>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

// Exercício 2 - Dadas 3 notas de alunos, crie a sua média e imprima reprovado ou aprovado. 

	float nota1, nota2, nota3, media;
	
	cout << "CÁLCULO DE MÉDIA \nIntroduza as 3 notas obtidas: " << endl;
	cin >> nota1 >> nota2 >> nota3;
	
	media = (nota1 + nota2 + nota3)/3;
	
	cout << "Média = " << media << endl;
	
	if(media >= 10)
	{
		cout << "Aprovado. Parabéns!";
	}
	else
	{
		cout << "Reprovado.";
	}


    return 0;
}
