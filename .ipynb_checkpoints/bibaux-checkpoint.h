// #include <time.h>
// #include <stdio.h>
// #include <stdlib.h>

void * vetorDescrescente(int *v, int tam){
    long int i;
    long int n = tam;
    
    for (i=0; i<n; i++){
        v[n-i-1] = i;
    }
}

void * vetorCrescente(int *v, int tam){
    long int i;
    long int n = tam;
    
    for (i=0; i<n; i++){
        v[i] = i;
    }
}


void * vetorAleatorio(int *v, int tam){
    srand(time(NULL));
    long int i;
    long int n = tam;
    
    for (i=0; i<n; i++) {
        v[i] = rand()%100;
    }
    
//     for (i=0; i<n-1; i++) {
//         printf("%ld\n", v[i]);
//     }
}