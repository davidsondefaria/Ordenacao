#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "bibaux.h"

int * vetorDescrescente(int tam);

void main(){
    int i, n=10;
    int *v;
    
    v = vetorDescrescente(n);
    
    for(i=0; i<n; i++){
        printf("%d\n", v[i]);
    }
}