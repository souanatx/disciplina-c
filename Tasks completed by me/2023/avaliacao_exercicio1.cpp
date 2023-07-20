/* Crie uma fun��o que permita calcular a �rea do tri�ngulo, passando � fun��o a base e a altura e retornando a �rea. 
Nota: �rea do tri�ngulo = (Base * Altura) / 2. 
*/

#include <iostream>
#include <locale>

using namespace std;

int calcularAreaTriangulo(int, int);

int main() 
{
	setlocale (LC_ALL, "Portuguese");
    int base, altura, area;
    cout << "Insira a base do tri�ngulo: " << endl;
    cin >> base;
    cout << "Insira a altura do tri�ngulo: " << endl;
    cin >> altura;
    area = calcularAreaTriangulo(base, altura);
    cout << "�rea do tri�ngulo = " << area << endl;
    return 0;
}

int calcularAreaTriangulo(int base, int altura) 
{
    return (base * altura) / 2;
}
