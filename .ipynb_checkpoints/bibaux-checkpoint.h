// #include <time.h>
// #include <stdio.h>
// #include <stdlib.h>

void vetorDescrescente(int *v, int tam){
    long int i;
    long int n = tam;
    
    for (i=0; i<n; i++){
        v[n-i-1] = i;
    }
}

void vetorCrescente(int *v, int tam){
    long int i;
    long int n = tam;
    
    for (i=0; i<n; i++){
        v[i] = i;
    }
}


void vetorAleatorio(int *v, int tam){
    srand(time(NULL));
    long int i;
    long int n = tam;
    
    for (i=0; i<n; i++) {
        v[i] = rand()%100;
    }
}

void printArray(int *v, int tam){
    int i;
    for(i=0; i<tam; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

void contaTempo(clock_t t1){
    clock_t t2;
    t2 = clock();
    printf("\n%.6f segundos.\n\n", (double)(t2-t1)/CLOCKS_PER_SEC);
}
