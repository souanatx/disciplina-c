// Atividade 9.2
#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");

    int num, i, cnt = 0, tecla;
    
	printf("Insira um n�mero: ");
	scanf("%d",&num);
	
	for(i = 2;i <= num/2;i++){
	    if(num % i == 0){
	     	cnt++;
	    }
	}
	
	if(cnt == 0 && num != 1)
		printf("%d � primo.",num);
	else
	  	printf("%d n�o � primo.",num);

	return 0;
}

