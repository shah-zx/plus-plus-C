#include <bits/stdc++.h>

using namespace std;

string pangrams(string s) {
int arr[26] = {0};
for(char &c : s){
    if(c >= 97 and c <= 122) arr[c-97] = 1;
    else if(c>=65 and c <= 90) arr[c-65] = 1;
}
for (int i =0; i < 26; i++) {
if(arr[i] == 0)
    return "pangram";

else 
return "not pangram";

}
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
