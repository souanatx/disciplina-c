#include <iostream>
#include <locale>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

// Exercício 10 - Escreva um programa em C para verificar se um triângulo é equilátero, isósceles ou escaleno, de acordo com a seguinte descrição:
// •Triângulo equilátero é um triângulo em que os três lados são iguais
// •Triângulo isósceles é um triângulo que tem dois lados de igual comprimento.
// •Triângulo escaleno é um triângulo que tem todos os lados diferentes. 

	int lado1, lado2, lado3;
	
	cout << "Introduza o comprimento em cms de cada lado do triângulo: " << endl;
	cin >> lado1 >> lado2 >> lado3;
	
	if(lado1 == lado2 && lado1 == lado3)
	
	{
		cout << "Trata-se de um triângulo equilátero (pois os três lados são iguais).";
	}
	else
	{	
		if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
		{
			cout << "Trata-se de um triângulo isósceles (pois tem dois lados de igual comprimento).";
		}
		else
		{
			cout << "Trata-se de um triângulo escaleno (pois tem todos os lados diferentes).";
		}		
	}
	
    return 0;
}
