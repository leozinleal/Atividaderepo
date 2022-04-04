#include <stdio.h>
int main() {
float salario;
float percentual;
float salariofinal;
float valoraumento;
printf("Informe o salario\n");
scanf("%f%*c",&salario);
printf("Informe o percentual de aumento\n");
scanf("%f%*c",&percentual);
valoraumento=salario*percentual/100;
salariofinal=salario+valoraumento;
printf("o valor do novo salario é: %.2f\n",salariofinal);
printf("o valor do aumento é: %.2f",valoraumento);
return 0;
}

