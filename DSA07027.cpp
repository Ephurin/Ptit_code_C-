#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;cin >> n;
	int a[n],r[n];
	stack<int> st;
	for(int i=0;i<n;i++) cin >> a[i];
	for(int i=n-1;i>=0;i--){
		while(!st.empty()&&st.top()<=a[i]){
			st.pop();
		}
		if(st.empty()) r[i]=-1;
		else r[i]=st.top();
		st.push(a[i]);
	}
	for(int i=0;i<n;i++) cout << r[i] << " ";
	cout << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}