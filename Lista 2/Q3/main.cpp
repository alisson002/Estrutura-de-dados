#include <iostream>
#include <stdbool.h>
#include <cstdbool>

using namespace std;

bool divisao(int &m, int &n, int d);

int main()
{
    int m=0,n=0,d=0;

    cout<<"m,n,d: "<<endl;
    cin>>m>>n>>d;

    divisao(m,n,d);

return 0;
}

bool divisao(int &m, int &n, int d){

    if(m%d==0||n%d==0){

        cout<<true<<endl;

        cout<<"Quociente inteiro de m/d = "<<m/d<<endl;
        cout<<"Quociente inteiro de n/d = "<<n/d<<endl;

    }
    else{

        cout<<false<<endl;

    }

return 0;
}
