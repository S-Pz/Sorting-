#include<stdio.h>
#include<stdlib.h>

int menu1(){

    int aux1;

    while (aux1){ 
MENU:        
        printf("\n ###########################################");
        printf("\n Escolha uma das opcoes\n");
        printf(" DIGITE 1 PARA VERTOR DE 20 ELEMENTOS \n");
        printf(" DIGITE 2 PARA VERTOR DE 500 ELEMENTOS \n");
        printf(" DIGITE 3 PARA VERTOR DE 5000 ELEMENTOS \n");
        printf(" DIGITE 4 PARA VERTOR DE 10000 ELEMENTOS \n");
        printf(" DIGITE 5 PARA VERTOR DE 200000 ELEMENTOS \n");
        printf("###########################################\n");
        scanf("%d", &aux1);
        fflush(stdin);
        if(aux1 == 1){
            aux1 = 20;
        }
        else if(aux1 == 2){
            aux1 = 500;
        }
        else if(aux1 == 3){
            aux1 = 5000;
        }
        else if(aux1 == 4){
            aux1 = 10000;
        }
        else if(aux1 == 5){
            aux1 = 200000;
        }
        return(aux1);
    }
}
int menu2 (){

    int aux2;

    while (aux2) { 

        printf("\n ###########################################");
        printf("\n Escolha uma das opcoes\n");
        printf(" DIGITE 1 PARA ORDENAÇÃO ALEATÓRIA \n");
        printf(" DIGITE 2 PARA ORDENAÇÃO CRESCENTE \n");
        printf(" DIGITE 3 PARA ORDENAÇÃO DECRESCENTE \n");
        printf(" 0 - Sair\n");
        printf("###########################################\n");
        scanf("%d", &aux2);
        fflush(stdin);

        return(aux2);
    }
}