#include <iostream>
#define MAX 100
#include <stdalign.h>
#include <time.h>

using namespace std;

//funções auxiliares para os algoritimos de ordenação
int troca(int C[MAX],int i,int j){

    int aux=0;

    aux = C[i];
    C[i] = C[j];
    C[j] = aux;

}

int particiona(int A[MAX],int p,int r){

    int x,i;

    x = A[r];
    i = p-1;

    for(int j=p;j<r;j++){
        if(A[j]<=x){
            i++;
            troca(A,i,j);
        }
    }
    troca(A,i+1,r);

return (i+1);
}

//algoritimos de ordenação

void quicksort(int A[MAX],int p, int r){

    int q;

    if(p<r){

        q = particiona(A,p,r);

        quicksort(A,p,q-1);
        quicksort(A,q+1,r);
    }

}

void minhaOrdenacao(int C[MAX],int n){

    int aux = 0;

    //ordenação
    for(int i=0;i<n+1;i++){
        for(int j=0;j<n+1;j++){
            if(C[j]>C[j+1]){
                aux = C[j];
                C[j] = C[j+1];
                C[j+1] = aux;
            }
        }
    }
}



int main()
{
    int A[MAX],B[MAX],C[MAX], x = MAX;

    srand(time(NULL));

    for(int i=0;i<x;i++){
        A[i] = rand()%100+1;
        B[i] = rand()%100+1;
    }

    //Mostrar valores de A
    cout<<"Vetor A: "<<endl;
    for(int i=0;i<x;i++){
        cout<<A[i]<<",";
    }
    cout<<endl<<endl;

    //Mostrar valores de B
    cout<<"Vetor B: "<<endl;
    for(int i=0;i<x;i++){
        cout<<B[i]<<",";
    }
    cout<<endl<<endl;

    quicksort(A,0,x);
    quicksort(B,0,x);

    //Mostrar valores de A ordenados
    cout<<"Vetor A ordenado: "<<endl;
    for(int i=0;i<x;i++){
        cout<<A[i]<<",";
    }
    cout<<endl<<endl;

    //Mostrar valores de B ordenados
    cout<<"Vetor B ordenado: "<<endl;
    for(int i=0;i<x;i++){
        cout<<B[i]<<",";
    }

    cout<<endl<<endl;

return 0;
}
