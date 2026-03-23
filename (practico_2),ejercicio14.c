#include <stdio.h>

int main() {
    // Variables para cantidades (enteros)
    int c_pollo, c_carne, c_queso, c_refresco, c_agua;
    // Variables para subtotales y total (decimales)
    float s_pollo, s_carne, s_queso, s_refresco, s_agua, total_general;

    printf("--- SALTEÑERIA LOCAL: INGRESO DE PEDIDO ---\n");

    // 1. Lectura de cantidades
    printf("Cantidad Salteñas de pollo (Bs 3.50): ");
    scanf("%d", &c_pollo);
    printf("Cantidad Salteñas de carne (Bs 4.00): ");
    scanf("%d", &c_carne);
    printf("Cantidad Empanadas de queso (Bs 3.00): ");
    scanf("%d", &c_queso);
    printf("Cantidad Refrescos 500ml (Bs 5.00): ");
    scanf("%d", &c_refresco);
    printf("Cantidad Agua mineral (Bs 3.00): ");
    scanf("%d", &c_agua);

    // 2. Cálculo de subtotales
    s_pollo = c_pollo * 3.50;
    s_carne = c_carne * 4.00;
    s_queso = c_queso * 3.00;
    s_refresco = c_refresco * 5.00;
    s_agua = c_agua * 3.00;

    // 3. Cálculo del total general
    total_general = s_pollo + s_carne + s_queso + s_refresco + s_agua;

    // 4. Mostrar el reporte final (formateado)
    printf("\n==========================================\n");
    printf("ITEM                CANT    TOTAL PARCIAL\n");
    printf("==========================================\n");
    printf("Salteña Pollo       %d       Bs %.2f\n", c_pollo, s_pollo);
    printf("Salteña Carne       %d       Bs %.2f\n", c_carne, s_carne);
    printf("Empanada Queso      %d       Bs %.2f\n", c_queso, s_queso);
    printf("Refresco 500ml      %d       Bs %.2f\n", c_refresco, s_refresco);
    printf("Agua Mineral        %d       Bs %.2f\n", c_agua, s_agua);
    printf("------------------------------------------\n");
    printf("TOTAL A PAGAR:               Bs %.2f\n", total_general);
    printf("==========================================\n");

    return 0;
}
