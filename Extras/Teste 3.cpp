#include <iostream>
#include <locale>

//#define PI 3.1415

using namespace std;



int main()
{
    setlocale (LC_ALL, "Portuguese");

// Exerc�cio 1 - Programa que receba o valor em minutos e apresente o resultado no formato HH:MM; teste: 122m = 2h2m

	int minutos, h, m;
	cout << "Insira os minutos: ";
	cin >> minutos; 
	h = minutos / 60;
	m = minutos % 60;
	cout << minutos << " minutos equivalem a " << h << "H " << m << "M" << endl;
    
    
// Exerc�cio 2 - Criar um programa para calcular a �rea do tri�ngulo = (base * Altura)/2 tendo em conta que a altura � constante e igual a 2.
	// const float PI  = 3.141592;
	// cout << "\nValor de PI = " << PI;

	const int alt = 2;
	int base, area;
	cout << "\nIntroduza o valor da base para calcular a �rea do tri�ngulo: ";
	cin >> base;
	area = (base*alt)/2;
	cout << "�rea do tri�ngulo = " << area << endl;


// Exerc�cio 3 -

	const float PI = 3.141592;
	float DobroPI = PI*2;
	char ch = 'a';
	char nome[20] = "Ana"; //cadeia de carateres de tamanho 20 - a isto chama-se tamb�m uma string 
	//� poss�vel que o utilizador escreva mais de 20 letras, mas o que acontecer� � que provavelmente n�o ficar� guardado na mem�ria RAM e portanto se eu voltar a pedir mais tarde o nome pode n�o aparecer completo. 
	//quando se ultrapassao n� de carateres reservados, o scanf usa espa�o livre e portanto pode depois outra vari�vel vir a substituir. Chama-se overflow do array ou da string.
	char apelido[20];
	int id;
	int numTLF;
	printf("\n%f � o valor de PI e 2 * PI = %f", PI, DobroPI);
	printf("\nO carater �: %c", ch); //codigo do carater "a"
	printf("\n\tO conte�do da \"string\" nome �: %s\n", nome);
	printf("Insira o ID e o n�mero de telefone: ");
	scanf("%d%d", &id, &numTLF); //n�o esquecer colocar "&" nos tipos de dados primitivos, int, char, float, double
	printf("\nO ID inserido foi: %d e o n�mero de telefone foi: %d", id, numTLF);
	printf("\nInsira o apelido: ");
	scanf("%s", apelido);
	printf("O seu apelido �: %s", apelido);
	


    return 0;
}
