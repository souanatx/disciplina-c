#include <iostream>
#include <locale>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

	int num = 1, i = 1;
	
	while ( num != 0)
	{
		system("cls");
		cout << "\nInsira o número da tabuada que pretende: " << endl;
		cin >> num;
		
		while ( i <= 10 && num != 0 )
		{
			cout << num << " x " << i << " = " << num * i << endl;
			i++;
		}
		system("pause");
		i = 1; // voltar a colocar i a 1, porque no final da tabuada i = 11, se não o programa não volta a correr
	}
	

    return 0;
}
