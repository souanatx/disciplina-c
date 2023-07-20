/* Crie uma função que permita calcular a Área do triângulo, passando à função a base e a altura e retornando a área. 
Nota: Área do triângulo = (Base * Altura) / 2. 
*/

#include <iostream>
#include <locale>

using namespace std;

int calcularAreaTriangulo(int, int);

int main() 
{
	setlocale (LC_ALL, "Portuguese");
    int base, altura, area;
    cout << "Insira a base do triângulo: " << endl;
    cin >> base;
    cout << "Insira a altura do triângulo: " << endl;
    cin >> altura;
    area = calcularAreaTriangulo(base, altura);
    cout << "Área do triângulo = " << area << endl;
    return 0;
}

int calcularAreaTriangulo(int base, int altura) 
{
    return (base * altura) / 2;
}
