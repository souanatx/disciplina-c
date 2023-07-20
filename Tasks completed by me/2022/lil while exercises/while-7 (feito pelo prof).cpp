#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

   int num = 1, i = 1;

   while (num != 0)
    {
        system("cls");
        cout << "Insira o numero da tabuada que pretende: " << endl;
        cin >> num;
        if(num != 0)
        {
            while(i <= 10)
            {
                cout << num << " X " << i << " = " << num * i << endl;
                i++;
            }
            system("pause");
            i = 1; // voltar a colocar i a 1, porque no final da tabuada i = 11
        }
        else
        {
            cout << "Adeus até à próxima!" << endl;
        }
    }
    return 0;
}
