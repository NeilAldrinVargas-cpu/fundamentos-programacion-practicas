#include <stdio.h>

int main() {
    // Usamos double para asegurar la precisión decimal del ejemplo
    double celsius, fahrenheit, kelvin, rankine;

    // 1. Entrada de datos
    printf("Ingrese la temperatura en grados Celsius: ");
    scanf("%lf", &celsius); // %lf se usa para leer doubles

    // 2. Procesamiento (Aplicando las fórmulas de la imagen)
    // Fahrenheit: (C * 9/5) + 32
    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    // Kelvin: C + 273.15
    kelvin = celsius + 273.15;

    // Rankine: (C + 273.15) * 9/5
    rankine = (celsius + 273.15) * 9.0 / 5.0;

    // 3. Salida de resultados
    printf("==========================================================\n");
    printf("Ejemplo de salida para C = %.2f:\n", celsius);
    printf("F = %.2f,    K = %.2f,    Ra = %.2f\n", fahrenheit, kelvin, rankine);
    printf("==========================================================\n");

    return 0;
}
