#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");

	const float PI = 3.141592;
	float DobroPI = PI * 2;
	char ch = 'a';
	char nome[20] = "Paula"; // Cadeia de caracteres de tamanho 20 -> String
	char apelido[20];
	int id;
	int numTLF;
	
	//printf("%.2f � o valor de PI e 2 * PI = %.3f ", PI, DobroPI);

	//printf("\nO caracter �: %d", ch); // C�digo (%d - int) do caracter "a"

	//printf("\tO conte�do da \"string\" nome, �: %s \n", nome);
	
	printf("\nInsira o ID e o N. de Tel.: ");
	scanf("%d%d", &id, &numTLF); // N�o esquecer colocar "&" nos tipos de dados primitivos, int, char, float, double
	printf("\nO �D que inseriu foi: %d e o n. de Tel. foi: %d",id, numTLF);
	printf("\nInsira o apelido: ");
	scanf("%s", apelido);
	printf("\nO nome �: %s %s", nome, apelido);

	return 0;
}

