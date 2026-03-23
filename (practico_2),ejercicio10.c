#include <stdio.h>

int main() {
    int d1, m1, d2, m2;
    int total_dias1, total_dias2, diferencia_total;
    int meses_dif, dias_dif;

    // 1. Entrada de datos (Fecha Inicial)
    printf("Fecha inicial (DD MM): ");
    scanf("%d %d", &d1, &m1);

    // 2. Entrada de datos (Fecha Final)
    printf("Fecha final (DD MM): ");
    scanf("%d %d", &d2, &m2);

    // 3. Convertir todo a DÍAS para poder restar fácilmente
    // Como cada mes tiene 30 días: (mes * 30) + días
    total_dias1 = (m1 * 30) + d1;
    total_dias2 = (m2 * 30) + d2;

    // 4. Calcular la diferencia absoluta en días
    diferencia_total = total_dias2 - total_dias1;

    // 5. Convertir la diferencia de nuevo a Meses y Días
    // Aplicamos la misma lógica del ejercicio anterior:
    meses_dif = diferencia_total / 30;   // ¿Cuántos grupos de 30 días hay?
    dias_dif = diferencia_total % 30;    // ¿Cuántos días sobran?

    // 6. Salida
    printf("\nDiferencia: %d meses y %d dias\n", meses_dif, dias_dif);

    return 0;
}
