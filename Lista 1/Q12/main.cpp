#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int m,n,x=0,y=0,aux1=0,aux2=0;

    cout<<"m e n: "<<endl;
    cin>>m>>n;
    cout<<endl;

    cout<<"Resultados: "<<endl;

    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            aux1 = i*j-pow(i,2)+j;
            cout<<aux1<<endl;
            if(aux1>aux2){
                aux2=aux1;
                x=i;
                y=j;
            }
        }
    }

    cout<<endl;
    cout<<"Par para o valor maximo: "<<"("<<x<<","<<y<<")"<<endl;
    cout<<"Valor maximo: x*y-x^2+y = "<<aux2<<endl;

return 0;
}
