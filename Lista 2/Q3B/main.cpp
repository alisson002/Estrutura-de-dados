#include <iostream>

using namespace std;

bool divisao(int &m, int &n, int d){

    int mmc = 0, j=m;

    if(m%d==0||n%d==0){

        cout<<true<<endl;

        cout<<"Quociente inteiro de m/d = "<<m/d<<endl;
        cout<<"Quociente inteiro de n/d = "<<n/d<<endl;

        if(m>n){
            j=n;
        }

        for(int i=1;i<=j;i++){
            for(int k=1;k<=j;k++){
                if(m*i==n*k){
                    mmc = m*i;
                    i=j;
                    k=j;
                }
            }
        }

        cout<<"mmc: "<<mmc<<endl;

    }
    else{

        cout<<false<<endl;

    }

return 0;
}

int main()
{
    int m=0,n=0,d=0;

    cout<<"m,n,d: "<<endl;
    cin>>m>>n>>d;

    divisao(m,n,d);

return 0;
}
