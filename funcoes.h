#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED

struct lista {
    float x;
    float y;
    char nome[50];
    int info;
    struct lista* prox;
    struct lista* ant;
};
typedef struct lista Lista;

int vazia(Lista* l);

Lista* inicializa (void);

Lista* insere (Lista* l, float x,float y, char* nome);

void imprime (Lista* l);

float distancia (Lista* l, Lista* p);

void acessa (Lista* l, float* x, float* y, char * nome);
#endif // FUNCOES_H_INCLUDED
