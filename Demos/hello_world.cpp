#include <iostream> // inclu�r a biblioteca iostream (fun��es de entrada/sa�da)

using namespace std;

int main() {

	float altura, peso;
	int idade;
	
	cout << "Insira a altura: " << endl;
	cin >> altura;
	
	cout << "Insira a idade: " << endl;
	cin >> idade;
	
	cout << "Insira o peso: " << endl;
	cin >> peso;
	
	cout << "Altura: \t" << altura << "m\n";
	cout << "Peso: \t\t" << peso << "kg\n";
	cout << "Idade: \t\t" << idade << " anos\n";

	return 0;
}

