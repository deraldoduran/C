//
// Created by duran on 06/06/2019.
//

#ifndef UNTITLED87_SHUFFLE_H
#define UNTITLED87_SHUFFLE_H
int embaralha(int *x,int n, int a, int b );
void print_cartela(int *cart);


void roleta(int *vet);
void rack(int *vet);
void imprime_roleta(int *vet,int n);
void imprime_rack(int *vet,int n);
int gera_cartela(int *l1,int *l2, int *l3,int *l4,int *l5,int **cart);
int compara(int **M, int *vet, int n);
int compara_linha(int **M, int *vet, int n);
//void atribui_cartela(int vet[],int n,int *l1,int *l2, int *l3,int *l4,int *l5,int **cart);
#endif //UNTITLED87_SHUFFLE_H
