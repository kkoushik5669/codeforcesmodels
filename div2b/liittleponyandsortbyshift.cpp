#include<bits/stdc++.h>
using namespace std;
#define lint long long int
int main(){
	int n;
	scanf("%d",&n);
	int c=n;
	deque<int>D(n);
	for(int i=0;i<n;i++)scanf("%lld",&D[i]);
	if(is_sorted(D.begin(),D.end())){
		printf("0\n");
		return 0;
	}
	while(D.front()>=D.back()&&c--){
		D.push_front(D.back());
		D.pop_back();
	}
	if(!is_sorted(D.begin(),D.end()))printf("-1\n");
	else printf("%lld\n",n-c);
	return 0;
}
