#include <stdio.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	 float hora,minutos;


        printf("Insira as horas: ");
        scanf("%f", &hora);

        minutos = hora;

            hora = (hora * 60);
            minutos = (minutos * 100);
            hora = hora + minutos;

        printf("%2.0f minutos", hora);

return 0;

}


