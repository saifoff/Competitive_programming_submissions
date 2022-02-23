#include"bits/stdc++.h"
using namespace std;
int main()
{
    int t,a[7],output[3];
    cin>>t;
    while(t--)
    {
        for(int i=0; i<7; i++)
        {
            cin>>a[i];
        }
        cout<<a[0]<<" "<<a[1]<<" "<<a[6]-(a[0]+a[1])<<endl;
    }
    return 0;
}
