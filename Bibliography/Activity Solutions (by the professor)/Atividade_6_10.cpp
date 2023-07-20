#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");

    int La, Lb, Lc;

    cout << "Insira o Lado a: ";
    cin >> La;

    cout << "Insira o Lado b: ";
    cin >> Lb;

    cout << "Insira o Lado c: ";
    cin >> Lc;

    if((La == Lb ) || (La == Lc) || (Lb == Lc))
        if((La == Lb) && (Lb == Lc))
            cout << "Equilátero" << endl;
        else
            cout << "Isósceles" << endl;
    else
        cout << "Escaleno" << endl;

	return 0;
}

