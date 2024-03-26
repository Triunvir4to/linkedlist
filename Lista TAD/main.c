#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "lista.h"

int main(){

    Lista *L1;
    int v, num;
    char excluir, buscar;

    printf("Lista\nQuantos dados: ");
    scanf(" %d", &num);

    for(int i = 1; i <= num; i++){
        printf("Digite valores: ");
        scanf(" %d", &v);
        L1 = ListaInserirNoFim( L1, v);
    }

    printf("Deseja excluir um elemento da lista? (S ou N)");
    scanf(" %c", &excluir);
    excluir = toupper(excluir);
    if(excluir == 'S'){
        printf("Qual elemento? ");
        scanf(" %c", &excluir);
        ListaExcluir(L1,excluir);
    }

    printf("Valores da lista:\n");
    ListaImprimir(L1);

    ListaLiberar(L1);
}
