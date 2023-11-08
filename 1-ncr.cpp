#include<iostream>
using namespace std;

long long getNcR(int n, int r){
    long long ans=1;
    for(int i=0; i<r; i++){
        ans*= (n-i);
        ans/=i+1;
    }
    return ans;
}
int main(){
    int n, r;
    cout<<"Enter n and r (r<n)";
    cin>>n>>r;
    cout<<"ans:"<<getNcR(n,r);
}