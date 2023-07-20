#include <iostream> // isto é C++. Se fosse biblioteca de C seria stdio.h
#include <locale>

// em cada namespace da biblioteca da iostream existem várias pastas

using namespace std;



int main()
{
    setlocale (LC_ALL, "Portuguese");

	cout << "\tAna\n" <<"\tTeixeira\n";

	int resultado, n1 = 5, n2 = 10;
	
	cout << "O resultado é: " << (n1 + n2);

    return 0;
}
