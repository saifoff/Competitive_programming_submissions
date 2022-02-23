#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    string local[n],express[m];
    for(int i=0;i<n;i++){
        cin>>local[i];
    }
    for(int i=0;i<m;i++){
        cin>>express[i];
    }
    for(int i=0;i<n;i++){
            int f=0;
        for(int j=0;j<m;j++){
            if(local[i]==express[j]){
                f=1;
            }
        }
        if(f==1){
            cout<<"Yes\n";
        }
        else if(f==0){
            cout<<"No\n";
        }
    }

}
