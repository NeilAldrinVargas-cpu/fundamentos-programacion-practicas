#include <stdio.h>

int main() {
    int total_minutos, dias, horas, minutos_restantes;

    // 1. Entrada de datos
    printf("Ingrese la cantidad de minutos: ");
    scanf("%d", &total_minutos);

    // 2. Lógica de conversión
    // Un día tiene 1440 minutos (24 * 60)
    dias = total_minutos / 1440;

    // El residuo nos da los minutos que no completaron un día
    int residuo_minutos = total_minutos % 1440;

    // De ese residuo, calculamos las horas (60 minutos por hora)
    horas = residuo_minutos / 60;

    // El residuo final son los minutos restantes
    minutos_restantes = residuo_minutos % 60;

    // 3. Salida de resultados
    printf("\nResultado:\n");
    printf("%d minutos equivalen a: %d dias, %d horas y %d minutos.\n",
            total_minutos, dias, horas, minutos_restantes);
            printf("residuo: %d",residuo_minutos );


    return 0;
}
