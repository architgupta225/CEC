#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i,j;
    for(i=0;i<n;i++){
       for(j=0;j<=i;j++){
           cout<<" ";
       }
       for(j=1;j<=n-i;j++){
           cout<<j;
       }
       cout<<endl;
    }
    return 0;
}