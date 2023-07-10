// LUOGU_RID: 96741656
#include<bits/stdc++.h>
using namespace std;
long long n,p,l=1e9,r,ans;
char c[1000001];
int main(){
ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
cin>>n>>p;
for (int i=1;i<=n;++i) cin>>c[i];
if (p+p>n) p=n-p+1;
for (int i=1;i+i<=n;++i) ans+=min(abs(c[i]-c[n-i+1]),26-abs(c[i]-c[n-i+1]));
for (long long i=1;i+i<=n;++i) if (c[i]!=c[n-i+1]) l=min(l,i),r=i;
if (r){
if (p<=l) ans+=r-p;
else if (p>=r) ans+=p-l;
else ans+=min(p-l+r-l,r-p+r-l);
}
cout<<ans;
return 0;
}
