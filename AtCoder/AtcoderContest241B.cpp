#include<bits/stdc++.h>
using namespace std;

int binarySearch(long long int array[], long long int x, int low, int high) {
  
	// Repeat until the pointers low and high meet each other
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x){
        array[mid]=-2;
        return mid;
    }

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main()
{
    int n,m,f;
    cin>>n>>m;
    long long int a[n],b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    if(n<m | m==0){
        cout<<"No"<<endl;
        return 0;
    }
    else{
        for(int i=0;i<m;i++){
            f=-100;
            f=binarySearch(a,b[i],0,n-1);
            if(f==-1){
                cout<<"No"<<endl;
                return 0;
            }
        }
        cout<<"Yes"<<endl;

    }
}