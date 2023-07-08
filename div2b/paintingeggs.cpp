#include<bits/stdc++.h>
using namespace std;
int n,now1,now2;
int a[1000005];
int b[1000005];
char ans[1000005];
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
		if(abs(now1-now2+a[i])<abs(now2-now1+b[i]))
		{
			ans[i]='A';
			now1+=a[i];
		}
		else
		{
			ans[i]='G';
			now2+=b[i];
		}
	}
	if(abs(now1-now2)>500) return puts("-1");
	for(int i=1;i<=n;i++) cout<<ans[i]; 
}
