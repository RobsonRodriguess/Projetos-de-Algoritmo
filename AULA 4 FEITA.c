#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	
    float n1, n2, n3, p1, p2, p3, mp;
    
    printf("Valor da prova 1:");
    scanf("%f", &n1);
    printf("Peso da prova 1:");
    scanf ("%f", &p1);
    printf("Valor da prova 2:");
    scanf("%f", &n2);
    printf("Peso da prova 2:");
    scanf("%f", &p2);
    printf("Valor da prova 3:");
    scanf("%f", &n3);
    printf("Peso da prova 3:");
    scanf("%f", &p3);
    
	mp=(n1*p1+n2*p2+n3*p3)/(p1+p2+p3);
	
	printf("sua media final foi de: %f", mp);
	
	return 0;

}