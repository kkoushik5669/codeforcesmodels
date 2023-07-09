#include <bits//stdc++.h>
using namespace std;
int m,n,x,a[101][101],b[101][101];
int main(){	
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++){
				scanf("%d",&b[i][j]);
				a[i][j]=1;
			}
	for(int i=0;i<m;i++)		
		for(int j=0;j<n;j++)
		{
			if(!b[i][j]){
				for(int x=0;x<n;x++)
					a[i][x]=0;
				for(int x=0;x<m;x++)
					a[x][j]=0;
			}
		}
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++){
			x=0;
			for(int q=0;q<n;q++)
				x = x|a[i][q];
			for(int q=0;q<m;q++)
				x = x|a[q][j];
			if(x!=b[i][j]){
				cout<<"NO";
				return 0;
			}
		}
	cout<<"YES"<<endl;
	for(int i=0;i<m;i++)		
		{
		for(int j=0;j<n;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
			}
 
	return 0;
}
