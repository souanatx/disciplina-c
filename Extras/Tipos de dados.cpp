#include <iostream> 
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

	int n1, n2; // tipo de dados: números inteiros
	float media; // utilizar float em vez de int para números fracionados
		
	cout << "Insira os dois valores: ";
	cin >> n1 >> n2;
	media = ((float)n1+n2)/2; // esta operação de mudar temporariamente o tipo de dados chama-se cast a uma variável, faz-se um "cast" para float de modo a não perder precisão
	cout << "Média: " << media;
	
	
	char nivel = 'C'; // tipo de dados para guardar carateres, trabalho com ascii
	// cout << "\nInsira o seu nível: ";
	// cin >> nivel;
	// cout << "\n O nível é: " << (int)nivel+1;
	// cout << "\nNivel = " << (char)(nivel + 1);
	// cout << "\nNivel = " << nivel + 25;
	// cout << "\nNivel = " << (char) (nivel + 55);


    return 0;
}
