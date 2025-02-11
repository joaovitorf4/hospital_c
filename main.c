#include <stdio.h>


typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    int hora;
    int minuto;
} Horario;

typedef struct {
    char rua[50];
    int numero;
    char bairro[50];
} Endereco;

typedef struct {
    int id;
    char nome[50];
    char especialidade[50];
} Medico;

typedef struct {
    int id;
    char nome[50];
    char identidade[50];
    Endereco endereco;
    int telefone;
    char sexo[1];
} Paciente;

typedef struct {
    int numero;
    int idMedico;
    int idPaciente;
    Data data;
    Horario horario;
    int duracao;
} Consulta;

void subMenu(char *menu) {
    int n;

    do {
        printf("1 - Inserir %s\n", menu);
        printf("2 - Alterar %s\n", menu);
        printf("3 - Excluir %s\n", menu);
        printf("4 - Pesquisar %s\n", menu);
        printf("5 - Sair\n");

        scanf("%d", &n);

        switch (n){
            case 1:
                printf("\nInserindo %s...\n", menu);
                break;
            case 2:
                printf("\nAlterando %s...\n", menu);
                break;
            case 3:
                printf("\nExcluindo %s...\n", menu);
                break;
            case 4:
                printf("\nPesquisando %s...\n", menu);
                break;
            case 5:
                printf("\nSaindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
                break;
        }
    } while( n != 5 );
}

void relMenu(){
    int n;

    do {
        printf("1 - Listar Consultas por Paciente\n");
        printf("2 - Listar Consultas por Medico\n");
        printf("3 - Listar Pacientes por Especialidade\n");
        printf("4 - Sair\n");

        scanf("%d", &n);

        switch (n){
            case 1:
                printf("\nListando Consultas por Paciente...\n");
                break;
            case 2:
                printf("\nListando Consultas por Medico...\n");
                break;
            case 3:
                printf("\nListando Pacientes por Especialidade...\n");
                break;
            case 4:
                printf("\nSaindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
                break;
        }
    } while( n != 4 );
}

// void listConsultaByPaciente(){}
// void listConsultaByMedico(){}
// void listPacienteByEspecialidade(){}

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
                printf("\nMenu das Consultas:\n");
                subMenu("Consulta");
                break;
            case 2:
                printf("\nMenu dos Pacientes:\n");
                subMenu("Paciente");
                break;
            case 3:
                printf("\nMenu dos Medicos:\n");
                subMenu("Medico");
                break;
            case 4:
                printf("\nMenu dos Relatorios:\n");
                relMenu();
                break;
            case 5:
                printf("\nSaindo...\n");
                break;
            default:
                printf("\nOpcao invalida!\n");
                break;
        }
    } while ( n != 5 );

    return 0;
}