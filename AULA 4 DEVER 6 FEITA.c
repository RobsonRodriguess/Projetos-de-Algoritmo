int main() {

 int alturadegrau, alturadesejada, qtddegraus;

 printf("Informe a altura de cada degrau: ");

 scanf("%d", &alturadegrau);

 printf("Informe a altura desejada: ");

 scanf("%d", &alturadesejada);

 qtddegraus = alturadesejada / alturadegrau;

 printf("Ser�o necess�rios subir %d degraus.\n", qtddegraus);


return 0;

}
