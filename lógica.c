#include "estrutura.h"
#include <stdio.h>

int valido(ESTADO *e , COORDENADA c) 
{
    return 1 ;
}
int jogar (ESTADO *estado, COORDENADA c){
    printf ("jogar %d %d\n",c.coluna ,7-c.linha);

    if (valido(estado,c))
    {
     set_Branca_Tabuleiro(estado,c);
    return 1;
    }
    else return 0;
}

