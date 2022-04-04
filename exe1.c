#include <stdio.h>
int main() {
int somaA;
int somaB;
int somaC;
int somaD;
int soma;
printf("Informe o primeiro numero\n");
scanf("%d%*c",&somaA);
printf("Informe o segundo numero\n");
scanf("%d%*c",&somaB);
printf("Informe o terceiro numero\n");
scanf("%d%*c",&somaC);
printf("Informe o quarto numero\n");
scanf("%d%*c",&somaD);
soma=(somaA+somaB+somaC+somaD);
printf("a soma dos numeros e: %d",soma);
return 0;
}

