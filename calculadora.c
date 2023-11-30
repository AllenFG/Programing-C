#include <stdio.h>

// Prototipos de funciones
void menu();
int suma();
int resta();
float division();
int multiplicacion();

int main() {
    int option;

    // Ciclo principal para repetir hasta que el usuario elija salir (opción 5)
    while (option != 5) {
        menu();
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("La suma es: %d\n", suma());
                break;
            case 2:
                printf("La resta es: %d\n", resta());
                break;
            case 3:
                printf("La division es: %f\n", division());
                break;
            case 4:
                printf("La multiplicacion es: %d\n", multiplicacion());
                break;
            case 5:
                printf("Programa finalizado.\n");
                break;
            default:
                printf("Opcion no valida. Intente de nuevo.\n");
        }
    }

    return 0;
}

// Definiciones de funciones

int resta() {
    int valor1, valor2;
    printf("Ingresa dos numeros: ");
    scanf("%d %d", &valor1, &valor2);
    return valor1 - valor2;
}

int suma() {
    int valor1, valor2;
    printf("Ingresa dos numeros: ");
    scanf("%d %d", &valor1, &valor2);
    return valor1 + valor2;
}

float division() {
    float valor1, valor2;
    printf("Ingresa dos numeros: ");
    scanf("%f %f", &valor1, &valor2);

    // Validación para evitar la división por cero
    if (valor2 != 0) {
        return valor1 / valor2;
    } else {
        printf("Error: Division por cero.\n");
        return 0; // O algún valor indicativo de error
    }
}

int multiplicacion() {
    int valor1, valor2;
    printf("Ingresa dos numeros: ");
    scanf("%d %d", &valor1, &valor2);
    return valor1 * valor2;
}

void menu() {
    printf("¿Que deseas realizar?\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Division\n");
    printf("4. Multiplicacion\n");
    printf("5. Salir\n");
}
// Este programa utiliza una función para mostrar un menú de opciones y solicitar al usuario que ingrese una opción. Luego, se utiliza un switch para realizar la operación correspondiente según la opción elegida. Finalmente, se utiliza un ciclo while para repetir el programa hasta que el usuario elija salir (opción 5).
