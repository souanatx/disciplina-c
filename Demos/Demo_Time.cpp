#include <iostream>
#include <locale>
#include <ctime>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");

    time_t secs = time(NULL);
    struct tm tm = *localtime(&secs); 
    
	printf("Data e hora atual: %d-%02d-%02d %02d:%02d:%02d\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);

	printf("\nData e hora atual como uma string completa: %s", ctime(&secs));
	
	return 0;
}

