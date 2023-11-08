#include<iostream>
using namespace std;
int minMax(int curDepth, int h, int scores[], int idx, bool isMax){
    if(curDepth==h)
        return scores[idx];
    if(isMax)
        return max(minMax(curDepth+1, h, scores, idx*2, false), minMax(curDepth+1, h, scores, idx*2+1, false));

    else
        return min(minMax(curDepth+1, h, scores, idx*2, true), minMax(curDepth+1, h, scores, idx*2+1, true));
}
int log2n(int n){
    if(n==1)
        return 0;
    else
        return 1+log2n(n/2);
}
int main(){
    int scores[]={3,5,2,9,12,5,23,23};
    int n= sizeof(scores)/sizeof(int);
    int h= log2n(n);
    cout<<"The optimal value is : "<<minMax(0, h, scores, 0, true);
    return 0;
}