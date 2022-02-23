#include "bits/stdc++.h"
using namespace std;

    int main()
    {
        long long int n,q;
        cin>>n>>q;
        long long int a[n],x[q];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<q;i++){
            cin>>x[i];
        }
        for(int i=0;i<q;i++){
            for(int j=0;j<n;j++){
                if(x[i]>=a[j]){
                    cout<<n-j<<endl;
                    break;
                }
            }
        }
       return 0;
    }
