#include <stdio.h>

int main() {
    float raio, area, perimetro;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    area = 3.14 * raio * raio;
    perimetro = 2 * 3.14 * raio;

    printf("Area: %f\n", area);
    printf("Perimetro: %f\n", perimetro);

    return 0;
}