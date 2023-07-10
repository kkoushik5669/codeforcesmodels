#include<iostream>
using namespace std;__int64 r,g,b;main(){cin>>r>>g>>b;cout<<min((r+g+b)/3,min(r+g,min(g+b,r+b)));}
