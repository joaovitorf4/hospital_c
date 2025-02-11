#include <stdio.h>

int main() {
    int n;

    do {
        printf("1 - Consulta\n");
        printf("2 - Paciente\n");
        printf("3 - Medico\n");
        printf("4 - Relatorios\n");
        printf("5 - Sair\n");

        scanf("%d", &n);

        switch (n){
        case 1:
            printf("Voce escolheu 1!\n");
            break;
        case 2:
            printf("Voce escolheu 2!\n");
            break;
        case 3:
            printf("Voce escolheu 3!\n");
            break;
        case 4:
            printf("Voce escolheu 4!\n");
            break;
        case 5:
            printf("Saindo...\n");
            break;
        default:
            printf("Opcao invalida!\n");
            break;
        }
    } while (n != 5);

    return 0;
}