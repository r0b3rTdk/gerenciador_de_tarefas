#include <stdio.h>
#include <string.h>
#include "gerenciador.h"

int lerNumero(const char *mensagem) {
    int num;
    while (1) { 
        printf("%s", mensagem);
        if (scanf("%d", &num) == 1) { 
            while (getchar() != '\n'); 
            return num;
        } else {
            printf("Erro: Entrada invalida. Digite um numero inteiro.\n");
            while (getchar() != '\n'); 
        }
    }
}

void adicionar(struct Tarefa tarefas[100], int *totalTarefas){
    if (*totalTarefas >= 100){
        printf("\nlimite de tarefas atingido");
        return;
    }
    tarefas[*totalTarefas].id = *totalTarefas + 1;
    printf("digite a tarefa que deseja adicionar: ");
    fgets(tarefas[*totalTarefas].descricao, 100, stdin);
    // Remove o caractere de nova linha (\n) do final da descrição
    if (tarefas[*totalTarefas].descricao[strlen(tarefas[*totalTarefas].descricao) - 1] == '\n') {
        tarefas[*totalTarefas].descricao[strlen(tarefas[*totalTarefas].descricao) - 1] = '\0';
    }
    int v;
    while (1) {
        v = lerNumero("Digite 0 para pendente e 1 para concluido: ");
        if (v == 0 || v == 1) {
            tarefas[*totalTarefas].concluida = v;
            break;
        } else {
            printf("Digite uma opcao valida (0 ou 1).\n");
        }
    }

    (*totalTarefas)++;
    printf("Tarefa adicionada com sucesso!\n");
}

void listar(struct Tarefa tarefas[100], int totalTarefas){
    if (totalTarefas == 0)
    {
        printf("nenhuma tarefa cadastrada");
    } 
    for (int i = 0; i < totalTarefas; i++) {
        printf("Tarefa %d: %s - %s\n", tarefas[i].id, tarefas[i].descricao, tarefas[i].concluida ? "concluido" : "pendente");
    }
}

void remover(struct Tarefa tarefas[100], int *totalTarefas) {
    if (*totalTarefas == 0) {
        printf("Nenhuma tarefa cadastrada. Adicione tarefas antes de tentar remover.\n");
        return;
    }

    int id = lerNumero("Digite o ID da tarefa a ser removida: ");
    if (id <= 0) {
        printf("ID inválido. O ID deve ser um número positivo.\n");
        return;
    }

    int encontrada = 0;
    for (int i = 0; i < *totalTarefas; i++) {
        if (tarefas[i].id == id) {
            encontrada = 1;
            for (int j = i; j < *totalTarefas - 1; j++) {
                tarefas[j] = tarefas[j + 1]; 
            }
            (*totalTarefas)--; 

            for (int j = 0; j < *totalTarefas; j++) {
                tarefas[j].id = j + 1;
            }

            printf("Tarefa removida com sucesso!\n");
            break;
        }
    }

    if (!encontrada) {
        printf("Tarefa com ID %d não encontrada.\n", id);
    }
}
