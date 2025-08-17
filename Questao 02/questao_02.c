#include <stdio.h>

int main() {
    float salarioBase, valorHoraExtra, totalReceber;
    float horasExtras;

    printf("Digite o salario base: ");
    scanf("%f", &salarioBase);

    printf("Digite o valor de cada hora extra: ");
    scanf("%f", &valorHoraExtra);

    printf("Digite a quantidade de horas extras: ");
    scanf("%f",&horasExtras);

    totalReceber = salarioBase + (valorHoraExtra * horasExtras);

    printf("O valor total a receber e: R$ %f\n", totalReceber);

    return 0;
}
