#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[(n*4)-1];
    for(int i=0;i<(n*4-1);i++){
        cin>>a[i];
    }
    int f = sizeof(a) / sizeof(a[0]);
    sort(a,a+f);
    //for(int i=0;i<(n*4-1);i++){
        //cout<<a[i];
    //}
    for(int i=0;i<n*4;){
            int p=0;
        for(int j=0;j<4;j++){
            if(a[i]==a[i+j]){
                p++;
            }
        }
    if(p!=4){
            cout<<a[i];
        break;
    }
    i=i+4;
    }

}
