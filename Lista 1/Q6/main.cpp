#include <iostream>

using namespace std;

int main()
{
    int a,b,n,x=false;

    cout<<"informe os numeros: "<<endl;
    cin>>a>>b;

    if(a>b){
        n=b;
    }
    else{
        n=a;
    }

    while(x==false){

        if(a%n==0&&b%n==0){
            cout<<a<<"/"<<b<<" equivale a: "<<a/n<<"/"<<b/n<<endl;
            x=true;
        }
        else{
            n--;
        }

    }
}
