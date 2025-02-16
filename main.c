#include <stdio.h>
#include <stdlib.h>
#include "gerenciador.h"

int main(){
    int op;
    int totalTarefas = 0;
    struct Tarefa tarefas[100];
    system("cls");
    
    while (1)
    {
        printf("\nGERENCIADOR DE TAREFAS");
        printf("\n1. Adicionar\n2. Listar\n3. Remover\n4. Sair\n");
        op = lerNumero("digite sua op: ");
        
        switch (op)
        {
        case 1:
            printf("Adicione Tarefas\n");
            adicionar(tarefas, &totalTarefas);
            break;
        case 2:
            printf("Listando Tarefas\n");
            listar(tarefas, totalTarefas);
            break;
        case 3:
            printf("Remova Tarefas\n");
            remover(tarefas, &totalTarefas);
            break;
        case 4:
            printf("\nEncerrando gerenciador de tarefas");
            return 0;
        default:
            printf("digite uma opcao valida(1-4)");
            break;
        }
    }
}