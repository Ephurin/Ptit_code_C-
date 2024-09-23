#include<bits/stdc++.h>
using namespace std;
int ans(string s){
	int a[256]={0};
	for(int i=0;i<s.size();i++) a[s[i]]++;
	for(int i=0;i<s.size();i++){
		if(2*a[s[i]]>=s.size()+2) return -1;
	}
	return 1;
}
int main(){
	int t;cin >> t;
	while(t--){
		string s;cin >> s;
		cout << ans(s) << endl;
	}
	return 0;
}
