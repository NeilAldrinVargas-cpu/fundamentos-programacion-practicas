#include <stdio.h>

int main() {
    float kwh, monto;

    printf("Ingrese el consumo mensual en kWh: ");
    scanf("%f", &kwh);

    if (kwh > 0 && kwh <= 100) {
        monto = kwh * 0.30;
        printf("Categoria: Basica\n");
    }
    else if (kwh > 100 && kwh <= 300) {
        monto = kwh * 0.50;
        printf("Categoria: Media\n");
    }
    else if (kwh > 300 && kwh <= 600) {
        monto = kwh * 0.75;
        printf("Categoria: Alta\n");
    }
    else if (kwh > 600) {
        monto = kwh * 1.10;
        printf("Categoria: Industrial\n");
    }
    else {
        printf("Consumo no valido.\n");
        return 1;
    }

    printf("El monto a pagar es: Bs %.2f\n", monto);

    return 0;
}
