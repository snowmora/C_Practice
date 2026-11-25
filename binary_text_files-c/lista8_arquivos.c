/*
 * Lista 8 – Estruturas com Ponteiros e Arquivos Binários
 * Disciplina: Programação Estruturada
 *
 * Conteúdo trabalhado:
 *  - struct + ponteiros
 *  - arquivos binários
 *  - fread / fwrite
 *  - fseek / ftell / rewind
 *  - atualização e remoção lógica em arquivo
 *
 * Profa. Dra. Tiemi Christine Sakata
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50
#define ARQ "alunos.bin"

/* ============================================================
   EXERCÍCIO 1 — Definição da estrutura
   ============================================================ */

typedef struct {
    char nome[MAX];
    int idade;
    float nota;
    char status;   // 'A' = ativo | 'I' = inativo
} Aluno;

/* ============================================================
   EXERCÍCIO 2 — Gravar aluno em arquivo binário
   ============================================================ */

void grava_aluno(Aluno *a) {
    /* TODO:
       - abrir o arquivo em modo binário para adicionar
       - gravar a estrutura no arquivo
       - fechar o arquivo
    */
}

/* ============================================================
   EXERCÍCIO 3 — Listar alunos ativos (leitura sequencial)
   ============================================================ */

void lista_alunos(void) {
    /* TODO:
       - abrir o arquivo em modo leitura binária
       - ler os registros um a um
       - imprimir apenas alunos com status 'A'
       - fechar o arquivo
    */
}

/* ============================================================
   EXERCÍCIO 4 — Buscar aluno por nome (leitura sequencial)
   ============================================================ */

int busca_aluno(char nome[], Aluno *a) {
    /* TODO:
       - abrir o arquivo
       - percorrer os registros
       - se encontrar o aluno ativo, copiar os dados para *a
       - retornar a posição do registro no arquivo
       - retornar -1 se não encontrar
    */
    return -1;
}

/* ============================================================
   EXERCÍCIO 5 — Atualizar nota (acesso posicional)
   ============================================================ */

void atualiza_nota(char nome[], float nova_nota) {
    /* TODO:
       - localizar o aluno no arquivo
       - usar fseek para voltar à posição correta
       - regravar o registro com a nova nota
    */
}

/* ============================================================
   EXERCÍCIO 6 — Remoção lógica de aluno
   ============================================================ */

void remove_aluno(char nome[]) {
    /* TODO:
       - localizar o aluno no arquivo
       - alterar o campo status para 'I'
       - regravar o registro no mesmo local
    */
}

/* ============================================================
   EXERCÍCIO 7 — Contar registros no arquivo
   ============================================================ */

int total_registros(void) {
    /* TODO:
       - usar fseek e ftell
       - retornar o total de registros do arquivo
    */
    return 0;
}

/* ============================================================
   PROGRAMA PRINCIPAL
   ============================================================ */

int main(void) {

    Aluno a;
    int op;
    char nome[MAX];
    float nova_nota;

    do {
        printf("\n--- MENU ---\n");
        printf("1 - Inserir aluno\n");
        printf("2 - Listar alunos\n");
        printf("3 - Buscar aluno\n");
        printf("4 - Atualizar nota\n");
        printf("5 - Remover aluno\n");
        printf("6 - Total de registros\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &op);
        getchar();

        switch (op) {

            case 1:
                printf("Nome: ");
                fgets(a.nome, MAX, stdin);
                a.nome[strcspn(a.nome, "\n")] = '\0';

                printf("Idade: ");
                scanf("%d", &a.idade);

                printf("Nota: ");
                scanf("%f", &a.nota);
                getchar();

                a.status = 'A';
                grava_aluno(&a);
                break;

            case 2:
                lista_alunos();
                break;

            case 3:
                printf("Nome do aluno: ");
                fgets(nome, MAX, stdin);
                nome[strcspn(nome, "\n")] = '\0';

                if (busca_aluno(nome, &a) != -1) {
                    printf("Encontrado: %s | Nota %.2f\n",
                           a.nome, a.nota);
                } else {
                    printf("Aluno nao encontrado.\n");
                }
                break;

            case 4:
                printf("Nome do aluno: ");
                fgets(nome, MAX, stdin);
                nome[strcspn(nome, "\n")] = '\0';

                printf("Nova nota: ");
                scanf("%f", &nova_nota);
                getchar();

                atualiza_nota(nome, nova_nota);
                break;

            case 5:
                printf("Nome do aluno: ");
                fgets(nome, MAX, stdin);
                nome[strcspn(nome, "\n")] = '\0';

                remove_aluno(nome);
                break;

            case 6:
                printf("Total de registros: %d\n",
                       total_registros());
                break;
        }

    } while (op != 0);

    return 0;
}
