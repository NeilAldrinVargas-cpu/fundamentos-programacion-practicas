#include <stdio.h>
#include <string.h> // Necesaria para comparar cadenas de texto

int main() {
    float precio_base, monto_final;
    char es_vip[5];

    printf("--- EL VALIDADOR DE DESCUENTOS ---\n");

    // Entrada de datos
    printf("Ingrese el precio original del producto: ");
    scanf("%f", &precio_base);

    printf("¿El cliente es VIP? (SI/NO): ");
    scanf("%s", es_vip);

    // Proceso: Comparación de texto
    // strcmp devuelve 0 si las cadenas son iguales
    if (strcmp(es_vip, "SI") == 0 || strcmp(es_vip, "si") == 0) {
        monto_final = precio_base * 0.85; // Aplicamos el descuento directamente (100% - 15% = 85%)
        printf("\nDescuento VIP aplicado.\n");
    } else {
        monto_final = precio_base;
        printf("\nPrecio total sin descuento.\n");
    }

    // Salida
    printf("MONTO FINAL A PAGAR: %.2f Bs\n", monto_final);
    printf("----------------------------------\n");

    return 0;
}
