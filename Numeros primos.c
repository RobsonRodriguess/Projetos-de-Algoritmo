#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num, i, divisor = 0;
	
	do{
		printf("Para descorbrir se um n�mero � primo, siga os passos.\n");
		printf("Digite o numero: ");
		scanf("%d", &num);
	}while (num < 2);
	
	for(i = 1; i <= num; i++)
	{
		if(num % i == 0){
			divisor++;
		}
		
	}
		
		if(divisor > 2){
			printf("%d n�o � Primo", num);
		}
		else{
			printf("%d � Primo", num);
		}
 
	return 0;
}
	
	
		
	
	
	
