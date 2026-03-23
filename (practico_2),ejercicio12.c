#include <stdio.h>

int main() {
    int dia, mes, fecha_codificada;

    printf("Ingrese dia (1-31): ");
    scanf("%d", &dia);
    printf("Ingrese mes (1-12): ");
    scanf("%d", &mes);

    // Creamos un numero unico para comparar: (Mes * 100) + Dia
    // Ejemplo: 21 de Marzo -> (3 * 100) + 21 = 321
    fecha_codificada = (mes * 100) + dia;

    printf("\nLa estacion es: ");

    if (fecha_codificada >= 321 && fecha_codificada < 621) {
        printf("Otoño\n");
    }
    else if (fecha_codificada >= 621 && fecha_codificada < 921) {
        printf("Invierno\n");
    }
    else if (fecha_codificada >= 921 && fecha_codificada < 1221) {
        printf("Primavera\n");
    }
    else {
        // El verano cruza el fin de año (Diciembre, Enero, Febrero)
        printf("Verano\n");
    }

    return 0;

}
