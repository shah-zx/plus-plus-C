#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
signed main(){
int t;
	cin>>t;
	while(t--){
	    vector<int> m;
	    int a , b , c;
        cin >> a >> b >> c;
	    int s = max(a,b);
	    int p = max(b,c);
	    int o = max(s,p);
	    if(o==a){
	        cout << "Alice" << endl;
	    }
	    else if(o==b){
	        cout << "Bob" << endl;
	    }
	    else{
	        cout << "Charlie" << endl;
	    }
	    
	}
	return 0;
}