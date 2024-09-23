#include<bits/stdc++.h>
using namespace std;
void solve(){
	string a,b;
	cin >> a >> b;
	int m=0,n=0;
	for(int i=0;i<a.length();i++){
		if(a[i]=='6') a[i]='5';
		m=m*10+(a[i]-'0');
	}
	for(int i=0;i<b.length();i++){
		if(b[i]=='6') b[i]='5';
		n=n*10+(b[i]-'0');
	}
	cout << m+n << " ";
	m=0;n=0;
	for(int i=0;i<a.length();i++){
		if(a[i]=='5') a[i]='6';
		m=m*10+(a[i]-'0');
	}
	for(int i=0;i<b.length();i++){
		if(b[i]=='5') b[i]='6';
		n=n*10+(b[i]-'0');
	}
	cout << m+n;
}
int main(){
	solve();
	return 0;
}
