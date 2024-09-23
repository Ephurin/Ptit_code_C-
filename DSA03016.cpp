#include<bits/stdc++.h>
using namespace std;
void solve(){
	int s,d;cin >> s >> d;
	int k=s/9;
	if(k>d) cout << -1;
	else if(k==d){
		if(s%9!=0) cout << -1;
		else{
			for(int i=0;i<d;i++){
			    cout << 9;
		    }
		}
	}
	else if(k==d-1){
		if(s%9==0){
			cout << 18;
			for(int i=0;i<d-2;i++){
				cout << 9;
			}
		}
		else{
			cout << s%9;
			for(int i=0;i<d-1;i++){
				cout << 9;
			}
		}
	}
	else if(k==0){
		cout << 1;
		for(int i=0;i<d-2;i++){
			cout << 0;
		}
		cout << s-1;
	}
	else{
		if(s%9==0){
			cout << 1;
			for(int i=0;i<d-k-1;i++){
				cout << 0;
			}
			cout << 8;
			for(int i=0;i<k-1;i++){
				cout << 9;
			}
		}
		else{
			cout << 1;
			for(int i=0;i<d-k-2;i++){
				cout << 0;
			}
			cout << s%9-1;
			for(int i=0;i<k;i++){
				cout << 9;
			}
		}
	}
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
	return 0;
}
