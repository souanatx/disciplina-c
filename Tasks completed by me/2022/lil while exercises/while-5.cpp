#include <iostream>
#include <locale>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

	int num, i = 1, produto = 1;
	
	cout << "\nInsira o número da tabuada que pretende: " << endl;
	cin >> num;
	
	while ( i <= 10)
	{
		cout << num << " x " << i << " = " << num * i << endl;
		i++;
	}
	

    return 0;
}
