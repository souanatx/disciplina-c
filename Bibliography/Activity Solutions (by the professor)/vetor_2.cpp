#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");

	char carateres[100] = "Paula Alexandra Dias";
	int i = 0;
	
	while(carateres[i] != '\0')
	{
		cout << carateres[i];
		i++;
	}
	cout << "\n" << i;

	return 0;
}

