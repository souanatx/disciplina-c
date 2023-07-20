#include <iostream>
#include <locale>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

// Crie um programa que receba 10 números e apresente o maior deles. 
 int num = 1, i = 1, maior = 1;

   while (i <= 10)
    {
        cout << "\nInsira um número: " << endl;
		cin >> num;
		maior = max(maior, num);
		i++;
	}
		
	cout << "Maior número introduzido = " << maior;
		
    return 0;
}
