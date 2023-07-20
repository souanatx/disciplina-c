#include <iostream>
#include <locale>

//#define PI 3.1415

using namespace std;



int main()
{
    setlocale (LC_ALL, "Portuguese");

// Exercício 1 - Programa que receba o valor em minutos e apresente o resultado no formato HH:MM; teste: 122m = 2h2m

	int minutos, h, m;
	cout << "Insira os minutos: ";
	cin >> minutos; 
	h = minutos / 60;
	m = minutos % 60;
	cout << minutos << " minutos equivalem a " << h << "H " << m << "M" << endl;
    
    
// Exercício 2 - Criar um programa para calcular a área do triângulo = (base * Altura)/2 tendo em conta que a altura é constante e igual a 2.
	// const float PI  = 3.141592;
	// cout << "\nValor de PI = " << PI;

	const int alt = 2;
	int base, area;
	cout << "\nIntroduza o valor da base para calcular a área do triângulo: ";
	cin >> base;
	area = (base*alt)/2;
	cout << "Área do triângulo = " << area << endl;


// Exercício 3 -

	const float PI = 3.141592;
	float DobroPI = PI*2;
	char ch = 'a';
	char nome[20] = "Ana"; //cadeia de carateres de tamanho 20 - a isto chama-se também uma string 
	//é possível que o utilizador escreva mais de 20 letras, mas o que acontecerá é que provavelmente não ficará guardado na memória RAM e portanto se eu voltar a pedir mais tarde o nome pode não aparecer completo. 
	//quando se ultrapassao nº de carateres reservados, o scanf usa espaço livre e portanto pode depois outra variável vir a substituir. Chama-se overflow do array ou da string.
	char apelido[20];
	int id;
	int numTLF;
	printf("\n%f é o valor de PI e 2 * PI = %f", PI, DobroPI);
	printf("\nO carater é: %c", ch); //codigo do carater "a"
	printf("\n\tO conteúdo da \"string\" nome é: %s\n", nome);
	printf("Insira o ID e o número de telefone: ");
	scanf("%d%d", &id, &numTLF); //não esquecer colocar "&" nos tipos de dados primitivos, int, char, float, double
	printf("\nO ID inserido foi: %d e o número de telefone foi: %d", id, numTLF);
	printf("\nInsira o apelido: ");
	scanf("%s", apelido);
	printf("O seu apelido é: %s", apelido);
	


    return 0;
}
