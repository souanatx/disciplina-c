// 8.1 - Crie um programa que imprima de zero a 100, por ordem inversa, apenas os números pares. 
#include <iostream> 
#include <locale>

using namespace std; 

int main() {
	
	setlocale (LC_ALL, "Portuguese");

	int i = 100;
	
	while (i >= 0) {
		if (i % 2 == 0) {
			cout << i << endl;
		}
		i--;
	}
		
	return 0;
}	
