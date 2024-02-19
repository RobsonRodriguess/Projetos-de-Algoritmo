 #include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int n, v;
    float e = 1, fat = 1;
    
    
    printf("Para calcular o fatorial e o valor da formula de um número siga os passos.\n");
    printf("Digite o número que será calculado: ");
    scanf("%d", &n);
    
    for (v=1; v<=n; v++)
    {
    	fat = fat*v;
    	e= e + 1/fat;
	}
	
	
	printf("O fatorial do número digitado é: %0.0f \n", fat);
	printf("Valor do número na formula e: %f", e);
	
	return 0;
}
