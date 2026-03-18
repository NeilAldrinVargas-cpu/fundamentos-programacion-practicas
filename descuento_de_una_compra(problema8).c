#include <stdio.h>

int main() {
    float monto, descuento, total;

    printf("--- SISTEMA DE VENTAS CON DESCUENTO ---\n");

    // Entrada de datos
    printf("Ingrese el monto total de la compra (Bs): ");
    scanf("%f", &monto);

    if (monto > 100) {
        descuento = monto * 0.10;
        total = monto - descuento;
        printf("\n¡Felicidades! Aplica al descuento del 10%%.\n");
        printf("Descuento aplicado: %.2f Bs\n", descuento);
    } else {
        total = monto;
        printf("\nLa compra no supera los 100 Bs. No hay descuento.\n");
    }

        printf("============================================\n");

    printf("TOTAL A PAGAR: %.2f Bs\n", total);
    printf("============================================\n");

    return 0;
}
