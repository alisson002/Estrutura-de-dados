#include <iostream>

using namespace std;

int main()
{
    int m,s,n=0;

    cout<<"Quantidade de duas de um mes, e dias da semana: "<<endl;
    cin>>m>>s;

    while(n<=(4*(s-1))-1){

        if(s==0){
            break;
        }
        cout<<" ";
        n++;

    }

    for(int i=1;i<=m;i++){

        if(i<10){
            cout<<"   "<<i;
            if(s==7){
                cout<<endl;
                s=0;
            }
        }
        else{
            cout<<"  "<<i;
            if(s==7){
                cout<<endl;
                s=0;
            }
        }

        s++;

    }
cout<<endl;
return 0;
}
