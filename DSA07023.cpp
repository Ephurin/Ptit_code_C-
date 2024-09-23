#include<bits/stdc++.h>
using namespace std;
void solve(){
	stack<string> st; 
	string s;
	getline(cin,s);
	stringstream ss(s);string tmp;
	while(ss >> tmp){
		st.push(tmp); 
	}
	while(!st.empty()){
		cout << st.top() << " ";
		st.pop();
	}
	cout << endl;
}
int main(){
	int t;cin >> t;cin.ignore();
	while(t--){
		solve();
	}
	return 0;
}
