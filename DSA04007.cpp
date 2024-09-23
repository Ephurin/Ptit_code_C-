#include<bits/stdc++.h>
using namespace std;
void solve(){
	int k;string a,b;cin >> k >> a >> b;
	while(a.length()>b.length()) b="0"+b;
	while(a.length()<b.length()) a="0"+a;
	string s = ""; int rmb = 0;
    for (int i = a.length() - 1; i >= 0; --i) {
        int dg = (a[i] - '0') + (b[i] - '0') + rmb;
        s = char(dg % k + '0') + s;
        rmb = dg / k;
    }
    if (rmb > 0) s = char(rmb + '0') + s;
    cout << s << endl;
} 
int main(){
	int t;cin >> t;
	while(t--) solve();
	return 0;
}
