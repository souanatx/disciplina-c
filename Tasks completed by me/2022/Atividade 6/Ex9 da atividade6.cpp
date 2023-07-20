#include <iostream>
#include <locale>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

// Exercício 9 - Escreva um programa em C para ler a temperatura em graus centígrados e exiba uma mensagem adequada de acordo com o estado da temperatura abaixo:
// •Temp < 0 - Tempo muito frio
// •Temp 0-15 - Tempo frio
// •Temp 15-25 - Tempo ameno
// •Temp 25- 35 – tempo quento
// •Temp > 35 – Tempo muito quente. 

	int temp;
	
	cout << "Introduza a temperatura atual em graus centígrados: " << endl;
	cin >> temp;
	
	if(temp < 0)
	
	{
		cout << "Tempo muito frio!";
	}
	else
	{	
		if(temp < 15)
		{
			cout << "Tempo frio.";
		}
		else
		{
			if(temp < 25)
			{
				cout << "Tempo ameno.";
			}
			else
			{
				if(temp < 35)
				{
					cout << "Tempo quente.";
				}
				else
				{
					cout << "Tempo muito quente!";
				}
			}
		}		
	}


	
    return 0;
}
