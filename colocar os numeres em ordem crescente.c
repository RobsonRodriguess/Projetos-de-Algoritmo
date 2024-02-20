#include <stdio.h>
#include <locale.h>

int main()
{
	
	setlocale(LC_ALL, "PORTUGUESE");
	
	int n1, n2, n3;
	
	printf("Para colocar os numeres em ordem crescente \n");
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	printf("digite o terceiro numero: ");
	scanf("%d", &n3);
	
	if(n1 <= n2 && n2 <= n3)
	{
		printf ("%d %d %d", n1, n2, n3);
	}
	
	else if(n1 <= n3 && n2 <= n3)
	printf(" %d %d %d", n1, n3, n2);
	
	else if(n2 <= n1 && n1 <= n3)
	printf("%d %d %d", n2, n1, n3);
	
	else if(n2 <= n3 && n3 <= n1)
	printf("%d %d %d", n3, n2, n1);
	
	else if (n3 <= n2 && n2 <= n1)
	printf("%d %d %d", n3,n2, n1);
	
	else if (n3 <= n1 && n1 <= n2)
	printf("%d %d %d", n3, n1 , n2);
	
	return 0;
	
}
	
