#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, disc, x1, x2, parteReal, parteImaginaria;

    printf("Ingrese los coeficientes a, b y c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        if (b == 0) {
            printf("Ecuacion degenerada (sin solucion o identidad).\n");
        } else {
            printf("Ecuacion lineal. Una solucion: x = %.2f\n", -c / b);
        }
    } else {
        // Calculamos el discriminante: b^2 - 4ac
        disc = (b * b) - (4 * a * c);

        if (disc > 0) {
            // Dos raíces reales distintas
            x1 = (-b + sqrt(disc)) / (2 * a);
            x2 = (-b - sqrt(disc)) / (2 * a);
            printf("Dos raices reales distintas: x1 = %.2f, x2 = %.2f\n", x1, x2);
        }
        else if (disc == 0) {
            // Raíz real doble
            x1 = -b / (2 * a);
            printf("Raiz real doble: x = %.2f\n", x1);
        }
        else {
            // Raíces complejas (disc < 0)
            parteReal = -b / (2 * a);
            parteImaginaria = sqrt(-disc) / (2 * a);
            printf("Raices complejas conjugadas:\n");
            printf("x1 = %.2f + %.2fi\n", parteReal, parteImaginaria);
            printf("x2 = %.2f - %.2fi\n", parteReal, parteImaginaria);
        }
    }

    return 0;
}
