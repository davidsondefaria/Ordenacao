#include <time.h>
#include <stdio.h>
#include <stdlib.h>



void ImprimeVetor(int v[], int n) {
    long int i;

    for (i=0; i<n-1; i++)
        printf("%d\n", v[i]);
    printf("%d", v[i]);
}

int main(int argc, char *argv[]) 
{
    clock_t t1, t2;

    int i;
    int n = atoi(argv[1]);
    int vetor[n];
    
    // leitura do vetor a ser ordenado
    for (i=0; i<n; i++)
        scanf("%d", &vetor[i]);
    
    // calculo do tempo para ordenar o vetor
    t1 = clock();
        BubbleSort(vetor, n);
    t2 = clock();
    
    printf("%.6f\n", (double)(t2-t1)/CLOCKS_PER_SEC);
}
