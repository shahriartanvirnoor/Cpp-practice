#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
 
    int n, k, count;
    cin>> n >> k;
    int a[n];
    for(int i=0; i<n; ++i){
        cin>>a[i];
    }
    
    for(int i=0; i<n; ++i){
        if(a[i]>=a[k-1] && k>=1 &&  a[k-1]>0){
            count = count + 1;
        }
    }
    cout<<count;
 
    return 0;
}
