#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, m;
  while(cin >> n >> m){
    vector<bool> center_cand(n+1, true);

    for(int i = 0; i < m; i++){
      int a, b;
      cin >> a >> b;
      center_cand[a] = center_cand[b] = false;
    }

    int c = 1;
    while(!center_cand[c]) c++;

    printf("%d\n", n-1);
    for(int u = 1; u <= n; u++){
      if(u != c) printf("%d %d\n", c, u);
    }
  }
}
