#include <iostream>
#include <cmath>
using namespace std;
bool prime(int n){
	int i,x=sqrt(n)+1;
	for (i=2;i<x;i++){
		if (n%i){continue;}
		else{return false;}
	}
	return n!=1;
}
int main(){
	int n;
	cin>>n;
	while (n--){
		long long t,o;
		cin>>t;
		o=sqrt(t);
		if (prime(o) and o*o==t){
			cout<<"YES\n";
		}else{cout<<"NO\n";}
	}
}
