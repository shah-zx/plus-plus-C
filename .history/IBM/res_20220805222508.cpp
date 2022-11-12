#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    vector<int> m;
	    int a , b , c;
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
