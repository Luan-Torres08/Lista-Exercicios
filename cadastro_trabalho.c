#include <stdio.h>
#include <string.h>

// 1 - CADASTRAR
void cadastrar(int codigo[], char nome[][15], int *total) {
    if (*total == 5) {
        printf("\nCadastro cheio!\n");
        return;
    }

    printf("\nDigite o codigo: ");
    scanf("%d", &codigo[*total]);
    getchar();

    printf("Digite o nome: ");
    fgets(nome[*total], 15, stdin);
    nome[*total][strcspn(nome[*total], "\n")] = '\0';

    (*total)++;

    printf("\nCadastro realizado com sucesso!\n");
}

// 2 - CONSULTAR
void consultar(int codigo[], char nome[][15], int total) {
    int busca;
    int i;
    int achou = 0;

    if (total == 0) {
        printf("\nNenhum registro cadastrado!\n");
        return;
    }

    printf("\nDigite o codigo para consulta: ");
    scanf("%d", &busca);

    for (i = 0; i < total; i++) {
        if (codigo[i] == busca) {
            printf("\nCodigo: %d\n", codigo[i]);
            printf("Nome: %s\n", nome[i]);
            achou = 1;
            break;
        }
    }

    if (achou == 0) {
        printf("\nCodigo nao encontrado!\n");
    }
}

// 3 - LISTAR
void listar(int codigo[], char nome[][15], int total) {
    int i;

    if (total == 0) {
        printf("\nNenhum registro cadastrado!\n");
        return;
    }

    printf("\n--- REGISTROS ---\n");

    for (i = 0; i < total; i++) {
        printf("Codigo: %d - Nome: %s\n", codigo[i], nome[i]);
    }
}

// 4 - ALTERAR
void alterar(int codigo[], char nome[][15], int total) {
    int busca;
    int i;
    int achou = 0;

    if (total == 0) {
        printf("\nNenhum registro cadastrado!\n");
        return;
    }

    printf("\nDigite o codigo que sera alterado: ");
    scanf("%d", &busca);

    for (i = 0; i < total; i++) {
        if (codigo[i] == busca) {
            printf("Digite o novo codigo: ");
            scanf("%d", &codigo[i]);
            getchar();

            printf("Digite o novo nome: ");
            fgets(nome[i], 15, stdin);
            nome[i][strcspn(nome[i], "\n")] = '\0';

            printf("\nRegistro alterado com sucesso!\n");
            achou = 1;
            break;
        }
    }

    if (achou == 0) {
        printf("\nCodigo nao encontrado!\n");
    }
}

// 5 - EXCLUIR
void excluir(int codigo[], char nome[][15], int *total) {
    int busca;
    int i;
    int j;
    int achou = 0;

    if (*total == 0) {
        printf("\nNenhum registro cadastrado!\n");
        return;
    }

    printf("\nDigite o codigo que sera excluido: ");
    scanf("%d", &busca);

    for (i = 0; i < *total && achou == 0; i++) {
        if (codigo[i] == busca) {
            for (j = i; j < *total - 1; j++) {
                codigo[j] = codigo[j + 1];
                strcpy(nome[j], nome[j + 1]);
            }

            (*total)--;

            printf("\nRegistro excluido com sucesso!\n");
            achou = 1;
        }
    }

    if (achou == 0) {
        printf("\nCodigo nao encontrado!\n");
    }
}

// PROGRAMA PRINCIPAL
int main(void) {
    int codigo[5];
    char nome[5][15];
    int total = 0;
    int opcao;

    do {
        printf("\n\n===== MENU =====");
        printf("\n1 - Cadastrar");
        printf("\n2 - Consultar");
        printf("\n3 - Listar");
        printf("\n4 - Alterar");
        printf("\n5 - Excluir");
        printf("\n0 - Sair");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrar(codigo, nome, &total);
                break;

            case 2:
                consultar(codigo, nome, total);
                break;

            case 3:
                listar(codigo, nome, total);
                break;

            case 4:
                alterar(codigo, nome, total);
                break;

            case 5:
                excluir(codigo, nome, &total);
                break;

            case 0:
                printf("\nEncerrando...\n");
                break;

            default:
                printf("\nOpcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}
