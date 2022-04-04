#include <stdio.h>
int main() {
float notaA;
float notaB;
float notaC;
float medianota;
printf("Informe a primeira nota\n");
scanf("%f%*c",&notaA);
printf("Informe a segunda nota\n");
scanf("%f%*c",&notaB);
printf("Informe a terceira nota\n");
scanf("%f%*c",&notaC);
medianota=(notaA+notaB+notaC)/3;
printf("a media da nota é: %f",medianota);
return 0;
}
