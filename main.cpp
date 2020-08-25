#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "funcoes.h"
using namespace std;

int main()
{
    Lista* l;
    l = inicializa();
    l = insere(l,2,2,"Cidade Um");
    l = insere(l,10,4,"Cidade Dois");
    l = insere(l,19,8,"Cidade Tres");
    l = insere(l,16,15,"Cidade Quatro");
    l = insere(l,5,19,"Cidade Cinco");
    l = insere(l,8,10,"Cidade Seis");
    imprime(l);
return 0;
}
