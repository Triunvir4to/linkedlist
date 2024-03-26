#include <stdio.h>
#include <stdlib.h>
#include <Lista.h"

Lista *ListaInserirNoFim(Lista *l1, int v){
    Lista *p, *Novo;

    for(p = l1; p!= NULL; p = p->prox){
        if(p->prox == NULL)
        break;
    }
    Novo = (Lista*)malloc(sizeof(Lista));
    Novo->info = v;
    Novo->prox = NULL;
    if(p!= NULL)
        p->prox = Novo;
    else
        l1 = Novo;
    return l1;
}

Lista *ListaExcluir(Lista *l1, int v){
    Lista *p, *ant = NULL, *Novo;
    for(p = l1; p!= NULL; p = p->prox){
        if(p->info == v)
                break;
        ant = p;
    }
    if(p == NULL)
        return l1;
    if(ant != NULL)
        ant->prox = p->prox;
    else
        l1 = p->prox;
        free(p);
    return l1;
}

int ListaBuscar(Lista *l1, int v){
    Lista *p;
    for(p = l1; p != NULL; p = p->prox){
        if(p->info == v)
            return 1;
    }
    return 0;
}

void ListaImprimir(Lista *l1){
    for(Lista *p = l1; p != NULL; p = p->prox){
        printf("%d\n", p->info);
    }
}

void ListaLiberar(Lista *l1){
    for(lista *p = l1; p!= NULL; p = p->prox){
        free(p);
    }
}
