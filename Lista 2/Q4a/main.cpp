#include <iostream>
#include <stdlib.h>
#include <time.h>
#define MAX 100

using namespace std;

void ordena(int C[MAX+1],int n,int &k,int A[MAX+1],int B[MAX+1]){

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
    //quantidade de numeros sem repetidos-1
    for(int i=0;i<n+1;i++){
        if(C[i]!=C[i+1]){
            k++;
        }
    }
    //valor real
    C[0] = k+1;
    //Mostrar valores de A
    cout<<"Vetor A: "<<endl;
    for(int i=0;i<MAX;i++){
        cout<<A[i]<<",";
    }
    cout<<endl<<endl;
    //Mostrar valores de B
    cout<<"Vetor B: "<<endl;
    for(int i=0;i<MAX;i++){
        cout<<B[i]<<",";
    }
    cout<<endl<<endl;
    //Mostrar valore de C
    cout<<"Vetor C, intercesao de A e B: "<<endl;
    for(int i=0;i<n+1;i++){
        cout<<C[i]<<",";
    }

}

void intersect(int A[MAX+1],int B[MAX+1],int C[MAX+1]){

    int n=0,k=0;
    //Interseção
    for(int i=0;i<MAX;i++){
        for(int j=0;j<MAX;j++){
            if(A[i]==B[j]){
                C[n+1] = A[i];
                n++;
            }
        }
    }

    ordena(C,n,k,A,B);

}

int main()
{
    int A[MAX],B[MAX],C[MAX];

    srand(time(NULL));

    for(int i=0;i<MAX;i++){
        A[i] = rand()%100;
        B[i] = rand()%100;
    }

    intersect(A,B,C);

return 0;
}
