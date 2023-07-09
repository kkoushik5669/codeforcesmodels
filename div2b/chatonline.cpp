#include<stdio.h>
int a[10000],b[10000],c[10000],d[10000],ans[10000]={0};
int main(){
	int i,n,m,x,y,j,k,sum=0,l,e,f;
	scanf("%d %d %d %d",&n,&m,&x,&y);
	for(i=0;i<n;i++) scanf("%d %d",&a[i],&b[i]);
	for(i=0;i<m;i++){
		scanf("%d %d",&c[i],&d[i]);
		for(j=0;j<n;j++){
			e=a[j]-d[i];
			f=b[j]-c[i];
			if(f<0) continue;
			if(e<0) e=0;
			for(k=e;k<=f;k++){
				if(ans[k]!=0 || k>y || k<x) continue;
				ans[k]++,sum++;
			}
		}
	}
	printf("%d",sum);
	return 0;
}
 		   				 		 			 					 	 	  		
