/*
Crie uma função que receba duas idades, nas seguintes condições: se idade 1 > que idade 2, retorna 1, se idade 1 < idade 2, retorna 2 e em caso de serem iguais, retorna 3. 
Nota: Mostre no ecrã apenas os valores de retorno. 
*/

#include <iostream>
#include <locale>

using namespace std;

int compararIdades(int, int);

int main() 
{
	setlocale (LC_ALL, "Portuguese");
    int idade1, idade2;
    cout << "Insira a idade 1: " << endl;
    cin >> idade1;
	cout << "Insira a idade 2: " << endl;
    cin >> idade2;
	// cout << idade1 << endl << idade2; - comentário para verificar se os valores estão a entrar corretamente
    int resultado = compararIdades(idade1, idade2);
    cout << "Resultado: " << resultado << endl;
    return 0;
}

int compararIdades(int idade1, int idade2) 
{
    if (idade1 > idade2) 
	{
        return 1;
    } 
	else if (idade1 < idade2) 
	{
        return 2;
    } 
	else 
	{
        return 3;
    }
}
