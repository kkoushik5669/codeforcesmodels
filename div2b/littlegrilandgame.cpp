#include<bits/stdc++.h>
#define ll int64_t
#define FastIO ios_base::sync_with_stdio(false) , cin.tie(0) , cout.tie(0)
#define opy cout<<"YES"<<endl
#define give(m) cout<<m<<endl;
#define pb push_back
#define mp make_pair
#define opn cout<<"NO"<<endl;
#define mod 1000000007
using namespace std;

ll gcd(ll a,ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
ll lcm(ll a, ll b) { return (b / gcd(a, b)) * a; }
ll fact(ll m){
    if(m==0 or m==1){return 1;}
    else{return m*fact(m-1);}
}
ll computexor(ll n)
{
    if(n%4==0)
    {
        return 0;
    }
    else if(n%4==1)
    {
        return n;
    }
    else if(n%4==2)
    {
        return n+1;        
    }
    else
    {
        return 0;
    }

}
vector<int>isprime(4000,1);
void seives()
{
    for(int i=2;i*i<4000;i++)
    {
        if(isprime[i])
        {
            for(int j=i*i;j<4000;j+=i)
            {
                isprime[j]=0;
            }
        }
    }
}
ll a[200010];
bool prime(ll x){
    ll i;
    for(i=2;i<=sqrt(x);i++){if(x%i==0) return 0;}
    return 1;
}
void solve()
{
   string s;
   cin>>s;bool flag=true;int n=s.length();
   map<char,int>mp;
   ll ones=0;
   for(int i=0;i<n;i++)
   {
    mp[s[i]]++;
   }
   for(int i='a';i<='z';i++)
   {
    if(mp[i]%2){ones++;}
   }
   for(int i=0;i<n-1;i++)
   {
    if(s[i]!=s[i+1]){flag=false;break;}
   }
   if(flag){cout<<"First"<<endl;return;}
   if(ones%2 || ones==0){cout<<"First"<<endl;return;}
   cout<<"Second"<<endl;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    // ll t;
    // cin>>t;
    // while(t--)
    // {
        solve();
    // }
    return 0;
}
