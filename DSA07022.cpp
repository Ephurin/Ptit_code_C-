#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;cin >> n;
	int a[n],b[n],f[100000];
	memset(f,0,sizeof(f));
	for(int i=0;i<n;i++){
		cin >> a[i];
		f[a[i]]++;
	}
	stack<int> st;
	for(int i=n-1;i>=0;i--){
		if(st.empty()){
			b[i]=-1;
			st.push(a[i]);
		}
		else{
			while(!st.empty()){
				if(f[a[i]]>=f[st.top()]) st.pop();
				else break;
			}
			if(!st.empty()) b[i]=st.top();
			else b[i]=-1;
			st.push(a[i]);
		}
	}
	for(int i=0;i<n;i++){
		cout << b[i] << " ";
	}
	cout << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
