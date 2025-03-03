#include <stdio.h> 

void mover_torre(int casas){
    if(casas == 0) return;
    printf("Cima\n");
    mover_torre(casas - 1 );
}

 void mover_rainha(int casas){
    if (casas == 0) return;
    printf("Direita\n");
    mover_rainha(casas - 1);
}

void mover_cavalo(int maxMovimentos) {
    for (int i = 0; i < maxMovimentos; i++) {
        for (int j = 0; j < maxMovimentos; j++) {
            if (i == 2 && j == 1) {
                printf("Cima, Direita\n");
                break;
            }
        }
    }
}

void bispo(int casas, int passo) {
    if (casas == 0) return;
    printf("Cima, Direita \n");
    bispo(casas - 1, passo);
}
void mover_bispo_loop(int movimentos) {
    for (int i = 0; i < movimentos; i++) {
        for (int j = 0; j < movimentos; j++) {
            if (i == j) {
                printf("Cima, direita\n");
            }
        }
    }
}


int main(){ 
    int casas = 3;
    printf("Movimento Da Torre:\n");
    mover_torre(casas);
    printf("\n");

    printf("Movimento Da Rainha:\n");
    mover_rainha(casas);
    printf("\n");
     
    printf("Movimento do Bispo: \n");
    bispo(casas,1);
    printf("\n");

    printf("Movimento do Cavalo: \n");
    mover_cavalo(casas);
    printf("\n");

    printf("Movimento do Bispo (Loop Alinhado): \n");
    mover_bispo_loop(casas);
    printf("\n");


    return 0;

}
