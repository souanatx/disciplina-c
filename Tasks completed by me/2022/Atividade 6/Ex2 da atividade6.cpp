#include <iostream>
#include <locale>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

// Exerc�cio 2 - Dadas 3 notas de alunos, crie a sua m�dia e imprima reprovado ou aprovado. 

	float nota1, nota2, nota3, media;
	
	cout << "C�LCULO DE M�DIA \nIntroduza as 3 notas obtidas: " << endl;
	cin >> nota1 >> nota2 >> nota3;
	
	media = (nota1 + nota2 + nota3)/3;
	
	cout << "M�dia = " << media << endl;
	
	if(media >= 10)
	{
		cout << "Aprovado. Parab�ns!";
	}
	else
	{
		cout << "Reprovado.";
	}


    return 0;
}
