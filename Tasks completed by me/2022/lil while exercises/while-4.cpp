#include <iostream>
#include <locale>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

	int num, i = 1, produto = 1;
	
	cout << "\n **** WHILE ****\n";
	while ( i < 6)
	{
		cout << "Insira um número: " << endl;
		cin >> num;
		produto = produto * num;
		system("cls");
		cout << "Produto = " << produto << endl;
		i++;
	}
	
	/*cout << "\n **** DO WHILE ****\n";
	do
	{
	
	}
	while (i < 6);
	*/
	

    return 0;
}
