#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    ll arr1[n],arr2[m];
    for(int i=0;i<n;i++) cin>>arr1[i];
    for(int i=0;i<m;i++) cin>>arr2[i];

    int i=0,j=0,flag=1;
    while (i<n && j<m )
    {
        if(arr1[i]<=arr2[j]) i++,j++;
        else j++;
    }
    cout<<n-(i)<<endl;
    
    return 0;
}
