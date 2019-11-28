
/* BubbleSort ----------------------------*/
void bubblesort(int *v, int t){
    int i, j, aux;
    for(i=t-1; i>=1; i--){
        for(j=0; j<i; j++){
            if(v[j] > v[j+1]){
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
}

/* InsertionSort ----------------------------*/
void insertionSort(int *v, int t){
    int i, j, aux;
    for(i=0; i<t; i++){
        aux = v[i];
        j = i-1;
        while((j>=0) && (v[j] > aux)){
            v[j+1] = v[j];
            j = j-1;
        }
        v[j+1] = aux;
    }
}

/* SelectionSort ----------------------------*/
void selectionSort(int *v, int t){
    int i, j, aux;
    for(i=0; i<t-1; i++){
        aux = i;
        for(j=i+1; j<t; j++){
            if(v[j] < v[aux]){
                aux = j;
            }
        }
        if(i!=aux){
            v[i] = v[i] + v[aux];
            v[aux] = v[i] - v[aux];
            v[i] = v[i] - v[aux];
        }
    }
}

/* MergeSort ----------------------------*/
void intercala(int v[], int l, int m, int r){
    int i, j, k;
    int tam1 = m-l+1;
    int tam2 = r-m;
    
    int v1[tam1], v2[tam2];
    
    for(i=0; i<tam1; i++)
        v1[i] = v[l+i];
    for(j=0; j<tam2; j++)
        v2[j] = v[m+1+j];
    
    j=0;
    i=0;
    k=l;
    
    while (i<tam1 && j<tam2){
        if(v1[i] <= v2[j]){
            v[k] = v1[i];
            i++;
        }
        else{
            v[k] = v2[j];
            j++;
        }
        k++;
    }
    
    while(i<tam1){
        v[k] = v1[i];
        i++;
        k++;
    }
    
    while(j<tam2){
        v[k] = v2[j];
        j++;
        k++;
    }
}

void mergeSort(int v[], int l, int r){
    if(l<r){
        int m;
        
        m = l+(r-l)/2;
        
        mergeSort(v, l, m);
        mergeSort(v, m+1, r);
        
        intercala(v, l, m, r);
    }
        
}

/* QuickSort ----------------------------*/
int particao(int *v, int l, int r){
    int p = v[r];
    int i = (l-1);
    int j;
    
    for(j=l; j<r-1; j++){
        if(v[j] < p){
            i++;
            troca(&v[i], &v[j]);
        }
    }
    troca(&v[i+1], &v[r]);

    return (i+1);
}

void quickSort(int *v, int l, int r){
    if(l<r){
        int p = particao(v, l, r);
        
        quickSort(v, l, p-1);
        quickSort(v, p+1, r);
    }
}

/* HeapSort ----------------------------*/
void heapify(int *v, int n, int i){
    int m = i;
    int l = 2*i+1;
    int r = 2*i+2;
  
    if (l < n && v[l] > v[m]) 
        m = l; 
  
    // If right child is larger than largest so far 
    if (r < n && v[r] > v[m]) 
        m = r; 
  
    if (m != i) { 
        troca(&v[i], &v[m]); 
  
        heapify(v, n, m); 
    } 
}

void heapSort(int *v, int n){
    int i;
    for(i=n/2 -1; i >= 0; i--) 
        heapify(v, n, i); 
  
    for (i=n-1; i>=0; i--) 
    { 
        troca(&v[0], &v[i]); 
        heapify(v, i, 0); 
    } 
}

double contaTempoR(clock_t t1){
    clock_t t2;
    t2 = clock();
    double resultado = (double)(t2-t1)/CLOCKS_PER_SEC;
//     printf("\n%.6f segundos.\n\n", (double)(t2-t1)/CLOCKS_PER_SEC);
    return (1000.0*resultado);
}

plot "analise.txt" u 1:5 w lp
replot "analise.txt" u 1:6 w lp
replot "analise.txt" u 1:7 w lp