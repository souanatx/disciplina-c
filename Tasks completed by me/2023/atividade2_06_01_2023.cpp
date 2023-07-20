#include <iostream>
#include <locale>
#include <vector>

#define MAX 51

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	int i, soma = 0, num;
    vector<int> pares;

    for (i = 100; i <= 200; i++)
    {
        if (i % 2 == 0)
        {
            soma += i;
            pares.push_back(i);
        }
    }

    for (int i = 0; i < pares.size(); i++)
    {
        cout << pares[i] << endl;
    }

	
 return 0;
}
