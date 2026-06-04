#include <stdio.h>

    int main() {
        int op;

        do {
            printf("---Menu---\n");
            printf("1.Perros con sal\n");
            printf("2.Gatos con limon\n");
            printf("3.Lolis con azucar\n");
            printf("4.Salir\n");
            printf("Ingrese una opcion: ");
            scanf("%d", &op);

            switch (op) {
                case 1:
                    printf("Perros con sal\n");
                    break;
                case 2:
                    printf("Gatos con limon\n");
                    break;
                case 3:
                    printf("Lolis con azucar\n");
                    break;
                case 4:
                    printf("Saliendo del programa...\n");
                    break;
                default:
                    printf("Opcion invalida. Por favor, ingrese una opcion valida.\n");
            }
        } while (op != 4);
        return 0;
    }