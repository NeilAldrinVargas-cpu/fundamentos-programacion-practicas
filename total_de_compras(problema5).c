#include <stdio.h>

int main() {
    // Declaración de variables y constante
    int cantidad, total;
    const int PRECIO = 12;

    printf("--- TIENDA DE UTILES ESCOLARES ---\n");

    // Entrada de datos
    printf("Cantidad de cuadernos a comprar: ");
    scanf("%d", &cantidad);

    // Proceso
    total = cantidad * PRECIO;

    // Salida de resultados
    printf("\n==================================\n");
    printf("Detalle de la compra:\n");
    printf("Cantidad: %d unidades\n", cantidad);
    printf("Precio unitario: %d Bs\n", PRECIO);
    printf("TOTAL A PAGAR: %d Bs\n", total);
    printf("====================================\n");

    return 0;
}
