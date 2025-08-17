#include <stdio.h>

int main() {
    int maquinas1 = 8;
    int maquinas2 = 10;
    int pecas1 = 120;
    int pecas2;
    int pecasPorMaquina = pecas1 / maquinas1;

    pecas2 = pecasPorMaquina * maquinas2;

    printf("Pecas produzidas por 10 maquinas: %d\n", pecas2);

    return 0;
}