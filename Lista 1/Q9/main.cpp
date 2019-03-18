#include <iostream>

using namespace std;

int main()
{
    int n,x,aux=1,y;

    cout<<"informe a quantidade de tantativas n>0: ";
    cin>>n;

    if(n<0){
        cout<<"informe a quantidade de tantativas n>0: ";
        cin>>n;
    }

    for(int i=0;i<n;i++){
        cout<<"Informe o fatorial: ";
        cin>>x;
        y=x;
        while(x>0){
            aux = aux*x;
            x--;
        }
        cout<<y<<"! = "<<aux<<endl;
        aux = 1;
    }

return 0;
}
