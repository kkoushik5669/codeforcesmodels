#include<bits/stdc++.h>
using namespace std;
int n,i=0,x,y;
int main()
{
scanf("%d",&n);int a[n],b[n];
while(scanf("%d",&a[i])>0)b[i]=a[i],i++;
sort(b,b+n);for(i=0;i<n;i++)if(a[i]!=b[i]){x=i;break;}
for(i=n-1;i>=0;i--)if(a[i]!=b[i]){y=i;break;}reverse(a+x,a+y+1);
for(i=0; i<n; i++)if(a[i]!=b[i]){printf("no"); return 0;}printf("yes\n%d %d", x+1,y+1);
}
