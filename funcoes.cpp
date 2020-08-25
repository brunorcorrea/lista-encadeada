#include <iostream>
#include <string.h>
#include <math.h>
#include <iomanip>
#include "funcoes.h"
using namespace std;

float dT = 0;

Lista* inicializa (void)
{
    return NULL;
}

int vazia(Lista* l)
{
    return(l == NULL);
}

Lista* insere (Lista* l, float x,float y, char* nome)
{
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    if( novo == NULL){
        printf("Memoria Insuficiente!");
    }
    novo->x = x;
    novo->y = y;
    strcpy(novo->nome,nome);
    novo->prox = l;
    novo->ant = NULL;
    if (l != NULL)
        l->ant = novo;
    return novo;
}

void imprime (Lista* l)
{
    Lista* p;
    Lista* p2;
    cout << "Origem \t\t" << "Destino \t" << "Distancia (KM)" << endl;
    for (p = l;p != NULL && p->prox != NULL;p = p->prox);
    for (p2 = p;p2 != l; p2 = p2->ant)
    {
        cout << p2->nome << "\t" << p2->ant->nome << "\t" << fixed << setprecision(2) << distancia(p2,p2->ant) << " km" << endl;
    }
    cout << p2->nome << "\t" << p->nome << "\t" << distancia(p2,p) << " km \n" << endl;

    cout << "-------------------------------------------" << endl;
    cout << "Distancia Total: \t\t" << dT << " km" << endl;
    cout << "-------------------------------------------" << endl;
}

void libera (Lista* l)
{
    if(vazia(l));
    free(l);
    libera(l->prox);
}

float distancia (Lista* l, Lista* p)
{
    float dx = l->x - p->x;
    float dy = l->y - p->y;
    dT += sqrt(dx*dx + dy*dy);
    return sqrt(dx*dx + dy*dy);
}

void acessa (Lista* l, float* x, float* y, char * nome)
{
    strcpy(nome,l->nome);
    *x = l->x;
    *y = l->y;
}

