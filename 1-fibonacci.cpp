#include<iostream>
using namespace std;


int main(){
    int n, a=0, b=1,c ;
    cout<<"enter number of terms ";
    cin>>n;
    cout<<"Required seq is: \n";

    for (int i = 1; i <=n; i++)
    {
        if(i==1){
            cout<<a<<" ";
            continue;
        }
        if(i==2){
            cout<<b<<" ";
            continue;
        }
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    return 0;
}