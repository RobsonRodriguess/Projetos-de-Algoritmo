 #include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int n, v;
    float e = 1, fat = 1;
    
    
    printf("Para calcular o fatorial e o valor da formula de um n�mero siga os passos.\n");
    printf("Digite o n�mero que ser� calculado: ");
    scanf("%d", &n);
    
    for (v=1; v<=n; v++)
    {
    	fat = fat*v;
    	e= e + 1/fat;
	}
	
	
	printf("O fatorial do n�mero digitado �: %0.0f \n", fat);
	printf("Valor do n�mero na formula e: %f", e);
	
	return 0;
}
