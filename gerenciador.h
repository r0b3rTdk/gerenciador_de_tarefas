#ifndef GERENCIADOR_H
#define GERENCIADOR_H

struct Tarefa {
    int id;
    char descricao[100];
    int concluida;
};

int lerNumero(const char *mensagem);
void adicionar(struct Tarefa tarefas[100], int *totalTarefas);
void listar(struct Tarefa tarefas[100], int totalTarefas);
void remover(struct Tarefa tarefas[100], int *totalTarefas);

#endif