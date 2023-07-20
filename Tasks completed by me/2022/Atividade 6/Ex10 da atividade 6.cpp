#include <iostream>
#include <locale>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

// Exerc�cio 10 - Escreva um programa em C para verificar se um tri�ngulo � equil�tero, is�sceles ou escaleno, de acordo com a seguinte descri��o:
// �Tri�ngulo equil�tero � um tri�ngulo em que os tr�s lados s�o iguais
// �Tri�ngulo is�sceles � um tri�ngulo que tem dois lados de igual comprimento.
// �Tri�ngulo escaleno � um tri�ngulo que tem todos os lados diferentes. 

	int lado1, lado2, lado3;
	
	cout << "Introduza o comprimento em cms de cada lado do tri�ngulo: " << endl;
	cin >> lado1 >> lado2 >> lado3;
	
	if(lado1 == lado2 && lado1 == lado3)
	
	{
		cout << "Trata-se de um tri�ngulo equil�tero (pois os tr�s lados s�o iguais).";
	}
	else
	{	
		if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
		{
			cout << "Trata-se de um tri�ngulo is�sceles (pois tem dois lados de igual comprimento).";
		}
		else
		{
			cout << "Trata-se de um tri�ngulo escaleno (pois tem todos os lados diferentes).";
		}		
	}
	
    return 0;
}
