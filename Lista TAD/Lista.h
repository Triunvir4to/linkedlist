#ifndef A_H_INCLUDED
#define A_H_INCLUDED

struct lista{
    int info;
    struct lista*prox;
};

typedef struct lista Lista;

Lista *ListaCriar();
Lista *ListaInserir(Lista *l1, int v);
Lista *ListaExcluir(Lista *l1, int v);
Lista *ListaBuscar(Lista *l1, int v);
void ListaImprimir(Lista *l1);
void ListaLiberar(Lista *l1);

#endif
