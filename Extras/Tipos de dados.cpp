#include <iostream> 
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

	int n1, n2; // tipo de dados: n�meros inteiros
	float media; // utilizar float em vez de int para n�meros fracionados
		
	cout << "Insira os dois valores: ";
	cin >> n1 >> n2;
	media = ((float)n1+n2)/2; // esta opera��o de mudar temporariamente o tipo de dados chama-se cast a uma vari�vel, faz-se um "cast" para float de modo a n�o perder precis�o
	cout << "M�dia: " << media;
	
	
	char nivel = 'C'; // tipo de dados para guardar carateres, trabalho com ascii
	// cout << "\nInsira o seu n�vel: ";
	// cin >> nivel;
	// cout << "\n O n�vel �: " << (int)nivel+1;
	// cout << "\nNivel = " << (char)(nivel + 1);
	// cout << "\nNivel = " << nivel + 25;
	// cout << "\nNivel = " << (char) (nivel + 55);


    return 0;
}
