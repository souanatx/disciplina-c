#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

// Crie um programa que leia idades, até ao utilizador inserir a idade 0. No final imprima a percentagem de pessoas com idades < 18, entre 18 e 65 e > 65. 
	
	int idade = 0, menores = 0, entre = 0, maiores = 0, total = 0;
	float percmenores, percentre, percmaiores;
	
	cout << "Inserir idades. Para terminar a contagem insira 0! " << endl;
    
    do
    {
    	total++;
		cout << "Idade: " << endl;
		cin >> idade;
		if (idade < 18) 
			menores++;
		else
			if (idade <= 65)
			entre++;
			else
			maiores++;
	} while (idade != 0); 
	
	//Para tirar da estatística a idade 0
	menores--;
	total--;
	
	percmenores = (menores/(float)total) * 100;
	percentre = (entre/(float)total) * 100;
	percmaiores = (maiores/(float)total) * 100;
	
	cout << "Percentagem de pessoas com idades inferiores a 18 anos: " << percmenores << "%" << endl;
	cout << "Percentagem de pessoas com idades entre os 18 e os 65 anos: " << percentre << "%" << endl;
	cout << "Percentagem de pessoas com idades superiores a 65 anos: " << percmaiores << "%" << endl;

    return 0;
}
