#include <stdio.h>

int main() {
    float horas, pago_hora, salario_base, bono, salario_total;

    printf("--- SISTEMA DE CALCULO DE SALARIOS ---\n");

    // Entrada de datos
    printf("Ingrese las horas trabajadas: ");
    scanf("%f", &horas);

    printf("Ingrese el pago por hora: ");
    scanf("%f", &pago_hora);

    // Cálculo base
    salario_base = horas * pago_hora;

    // Estructura Condicional para el Bono
    if (horas > 40) {
        bono = salario_base * 0.10;
        salario_total = salario_base + bono;
        printf("\nBono del 10%% aplicado por exceso de horas.\n");
        printf("Monto del bono: %.2f\n", bono);
    } else {
        salario_total = salario_base;
        printf("\nNo se aplican bonos adicionales.\n");
    }


    printf("---------------------------------------\n");
    printf("SALARIO TOTAL: %.2f\n", salario_total);
    printf("---------------------------------------\n");

    return 0;
}
