#include <iostream>
#include <locale>
 
#define MAX 51
 
using namespace std;
 
int main()
{
    setlocale (LC_ALL, "Portuguese");
    
    int i, k = 0, num, soma = 0;
    int pares[MAX];
/*   
    cout << "Insira um número: ";
    cin >> num;
 
    for(i = 1; i <= 10; i++)
    {
        cout << num << " X " << i << " = " << num * i << endl;
    }
*/
 
    for(i = 100; i <= 200; i = i + 2)
    {
        //if(i % 2 == 0)
        //{
            soma+=i; // soma = soma + i
            pares[k] = i;
            k++;
        //}
    }
    
    for(i = MAX - 1; i >= 0; i--)
    {
        cout << pares[i] << endl;
    }
 
    return 0;
}
 
