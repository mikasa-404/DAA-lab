#include<iostream>
#include<math.h>
using namespace std;

bool checkArm(int n){
    int rem, result=0;

    int x=n;
    // l is number of digits
    int l=0;
    while(x!=0){
        l++;
        x=x/10;
    }

    int num=n;
    while(n!=0){
        rem=n%10;
        result+=pow(rem,l );
        n=n/10;
    }
    if(num==result) return true;
    else return false;
}
int main(){
    int n, m;
    cout<<"enter two num (n<m)";
    cin>>n>>m;
    for (int i = n; i <=m; i++)
    {
        if(checkArm(i))
            cout<<i<<" ";
    }
}