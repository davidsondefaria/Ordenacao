// #include <time.h>
// #include <stdio.h>
// #include <stdlib.h>

void vetorDescrescente(int *v, int t){
    long int i;
    long int n = t;
    
    for (i=0; i<n; i++){
        v[n-i-1] = i;
    }
}

void vetorCrescente(int *v, int t){
    long int i;
    long int n = t;
    
    for (i=0; i<n; i++){
        v[i] = i;
    }
}


void vetorAleatorio(int *v, int t){
    srand(time(NULL));
    long int i;
    long int n = t;
    
    for (i=0; i<n; i++) {
        v[i] = rand()%100;
    }
}

void printArray(int *v, int t){
    int i;
    for(i=0; i<t; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

void contaTempo(clock_t t1){
    clock_t t2;
    t2 = clock();
    printf("\n%.6f segundos.\n\n", (double)(t2-t1)/CLOCKS_PER_SEC);
}


void troca(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}