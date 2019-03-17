#include <iostream>

using namespace std;

int main()
{
    int n,i,j,x[100],y[100],z=0,m=0;

    cout<<"n,i,j: ";
    cin>>n>>i>>j;

    for(int k=0;k<=n;k++){

        x[k] = i*k;
        y[k] = j*k;

    }

    while(z<=(n)){

        if(x[m]==y[m]){

            cout<<x[m]<<",";
            m++;
            z++;

        }
        else{

            if(i<j){

                cout<<x[m]<<",";
                z++;
                cout<<y[m]<<",";
                z++;
                m++;

            }
            else{

                cout<<y[m]<<",";
                z++;
                cout<<x[m]<<",";
                z++;
                m++;

            }

        }
        z++;
    }

    if(i<j){

        cout<<x[m+1]<<",";
    }
    else{

        cout<<y[m+1]<<",";

    }
}
