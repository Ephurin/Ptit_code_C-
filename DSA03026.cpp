#include<bits/stdc++.h>
using namespace std;
void solve(){
	int s,d;cin >> d >> s;
	int k=s/9;
	if(k>d){
		cout << -1 << " " << -1;
		return;
	}
	else if(k==d){
		if(s%9!=0){
			cout << -1 << " " << -1;
			return;
		}
		else{
			for(int i=0;i<d;i++){
			    cout << 9;
		    }
		    cout << " ";
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
			cout << " ";
			for(int i=0;i<k;i++){
				cout << 9;
			}
			cout << 0;
		}
		else{
			cout << s%9;
			for(int i=0;i<d-1;i++){
				cout << 9;
			}
			cout << " ";
			for(int i=0;i<d-1;i++){
				cout << 9;
			}
			cout << s%9;
		}
	}
	else if(k==0){
		cout << 1;
		for(int i=0;i<d-2;i++){
			cout << 0;
		}
		cout << s-1 << " " << s;
		for(int i=0;i<d-1;i++){
			cout << 0;
		}
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
			cout << " ";
			for(int i=0;i<k;i++){
				cout << 9;
			}
			for(int i=0;i<d-k;i++){
				cout << 0;
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
			cout << " ";
			for(int i=0;i<k;i++){
				cout << 9;
			}
			cout << s%9;
			for(int i=0;i<d-k-1;i++){
				cout << 0;
			}
		}
	}
}
int main(){
	solve();
	return 0;
}
