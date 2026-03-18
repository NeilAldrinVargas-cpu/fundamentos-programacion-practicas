#include <stdio.h>

int main() {
    float x, y;
    int r;

    // Entrada de datos
    printf("Ingrese la coordenada x: ");
    scanf("%f", &x);
    printf("Ingrese la coordenada y: ");
    scanf("%f", &y);

    // Lógica para determinar el cuadrante
    if (x > 0 && y > 0) {
        r = 1;
    } else if (x < 0 && y > 0) {
        r = 2;
    } else if (x < 0 && y < 0) {
        r = 3;
    } else if (x > 0 && y < 0) {
        r = 4;
    } else {
        // Manejo de puntos sobre los ejes (opcional según la nota)
        printf("El punto se encuentra sobre un eje.\n");
        return 0;
    }

    // Salida del resultado
    printf("================================\n");
    printf("El punto pertenece al cuadrante: %d\n", r);
    printf("================================\n");


    return 0;
}
