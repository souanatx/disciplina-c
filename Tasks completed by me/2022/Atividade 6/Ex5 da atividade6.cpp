#include <iostream>
#include <locale>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

// Exerc�cio 5 - Escreva um programa em C para descobrir se um determinado ano � bissexto ou n�o.
    
	int ano;
    
    cout << "\nInsira determinado ano: " << endl;
    cin >> ano;
    if (ano % 4 == 0) 
	{
        if (ano % 100 == 0) 
		{
            if (ano % 400 == 0) 
			{
                cout << "� bissexto" << endl;
            } 
			else 
			{
                cout << "N�o � bissexto" << endl;
            }
        } else 
		{
            cout << "� bissexto" << endl;
        }
    } 
	else 
	{
        cout << "N�o � bissexto" << endl;
    }
    
    

    return 0;
}
