#include <iostream>
#include <locale>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

// Exercício 5 - Escreva um programa em C para descobrir se um determinado ano é bissexto ou não.
    
	int ano;
    
    cout << "\nInsira determinado ano: " << endl;
    cin >> ano;
    if (ano % 4 == 0) 
	{
        if (ano % 100 == 0) 
		{
            if (ano % 400 == 0) 
			{
                cout << "É bissexto" << endl;
            } 
			else 
			{
                cout << "Não é bissexto" << endl;
            }
        } else 
		{
            cout << "É bissexto" << endl;
        }
    } 
	else 
	{
        cout << "Não é bissexto" << endl;
    }
    
    

    return 0;
}
