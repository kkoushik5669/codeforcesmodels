#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,x,dp[100009],q;
map<ll,ll>mp;
int main(){
    cin>>q;
    while(q--){ cin>>x; mp[x]++; }
    for(ll i=1;i<=1e5;i++) dp[i]= max( dp[i-1] , dp[i-2]+mp[i]*i );
    cout<<dp[100000];
}
