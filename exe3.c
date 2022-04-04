#include <stdio.h>
int main() {
float notaA;
float pesoA;
float notaB;
float pesoB;
float notaC;
float pesoC;
float medianota;
printf("Informe a primeira nota\n");
scanf("%f%*c",&notaA);
printf("Informe o primeiro peso\n");
scanf("%f%*c",&pesoA);
printf("Informe a segunda nota\n");
scanf("%f%*c",&notaB);
printf("Informe o segundo peso\n");
scanf("%f%*c",&pesoB);
printf("Informe a terceira nota\n");
scanf("%f%*c",&notaC);
printf("Informe o terceiro peso\n");
scanf("%f%*c",&pesoC);
medianota=(notaA*pesoA+notaB*pesoB+notaC*pesoC)/3;
printf("a media da nota é: %f",medianota);
return 0;
}

