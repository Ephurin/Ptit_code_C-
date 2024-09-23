#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s;int n;
	vector<int> v;
	while(cin >> s){
		if(s=="push"){
			cin >> n;
			v.push_back(n);
		}
		else if(s=="pop"){
			v.pop_back();
		}
		else if(s=="show"){
			if(v.empty()) cout << "empty" << endl;
			else{
				for(int i=0;i<v.size();i++){
					cout << v[i] << " ";
				}
				cout << endl;
			}
		}
	}
}
int main(){
	solve();
	return 0;
}
