#include<bits/stdc++.h>
using namespace std;
int ans(string s,int d){
	int a[256]={0};
	for(int i=0;i<s.size();i++) a[s[i]]++;
	int k=*max_element(a,a+256);
	if(k<=ceil((float)s.size()/d)) return 1;
	return -1;
}
int main(){
	int t;cin >> t;
	while(t--){
		int d;string s;cin >> d >> s;
		cout << ans(s,d) << endl;
	}
	return 0;
}
