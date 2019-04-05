#include <iostream>
#define MAX 100
#include <stdlib.h>
#include <time.h>


using namespace std;

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

void quicksort(int A[MAX],int p, int r){

    int q;

    if(p<r){

        q = particiona(A,p,r);

        quicksort(A,p,q-1);
        quicksort(A,q+1,r);
    }

}


int intercala(int A[MAX],int B[MAX], int C[2*MAX], int m, int n,int &k){

    int i=0,j=0,r=0,maior = m;

    if(n>m){
        maior = n;
    }

    while(r<m+n){
       // if(i>n||j>m){
            //if(i>n){
               // C[k] = B[j];

            //}
            //else{

            //}

        //}
        //else{
            if(A[i]<B[j]){
                if(A[i]==A[i+1]){
                    i++;
                    k++;
                }
                C[r] = A[i];
                r++;
                i++;
            }
            else if(A[i]>B[j]){
                if(B[j]==B[j+1]){
                    j++;
                    k++;
                }
                C[r] = B[j];
                r++;
                j++;
            }
            else{
                i++;
                k++;
            }

        //}
    }
}

int main()
{
    int A[MAX],B[MAX],C[MAX],n,m,k=0;

        srand(time(NULL));

        cout<<"Tamanho do vetor A e B: ";
        cin>>n>>m;

        for(int i=0;i<n;i++){
            A[i] = rand()%100+1;
        }

        for(int i=0;i<m;i++){
            B[i] = rand()%100+1;
        }

        quicksort(A,0,n);
        quicksort(B,0,m);

        //Mostrar valores de A ordenados
        cout<<"Vetor A ordenado: "<<endl;
        for(int i=0;i<n;i++){
            cout<<A[i]<<",";
        }
        cout<<endl<<endl;

        //Mostrar valores de B ordenados
        cout<<"Vetor B ordenado: "<<endl;
        for(int i=0;i<m;i++){
            cout<<B[i]<<",";
        }
        cout<<endl<<endl;

        intercala(A,B,C,m,n,k);

        //Mostrar valore de C
        cout<<"Vetor C, intercesao de A e B: "<<endl;
        for(int i=0;i<m+n-k;i++){
            cout<<C[i]<<",";
        }


return 0;
}
