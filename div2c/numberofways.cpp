#include <iostream>
using namespace std;
long long n,a[500005],x,i,c,k;
int main () {
	for(cin>>n;cin>>a[i];i++)a[i]+=a[i-1];
	for(;x<n-1;x++){
		if(a[x]*3==a[n-1]*2)k+=c;
		if(a[x]*3==a[n-1])c++;
	}
	cout<<k<<endl;
}
