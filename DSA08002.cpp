#include<bits/stdc++.h>
using namespace std;
void solve(){
	queue<int> q;
	int n;cin >> n;
	while(n--){
		string s;cin >> s;
		if(s=="PUSH"){
			int tmp;cin >> tmp;
			q.push(tmp);
		}
		else if(s=="POP"){
			if(!q.empty()) q.pop();
		}
		else if(s=="PRINTFRONT"){
			if(q.empty()) cout << "NONE" << endl;
			else cout << q.front() << endl;
		}
	}
}
int main(){
	solve();
	return 0;
}
