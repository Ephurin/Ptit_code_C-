#include<bits/stdc++.h>
using namespace std;
char a[20];int n,isOK;
bool valid(char s[]){
	if(s[1]=='A') return 0;
	if(s[n]=='H') return 0;
	for(int i=1;i<n;i++){
		if(a[i]=='H'&&a[i+1]=='H') return 0;
	}
	return 1;
}
void prep(){
	isOK=1;
	for(int i=1;i<=n;i++){
		a[i]='A';
	}
}
void next(){
	int i=n;
	while(i>=1&&a[i]=='H'){
		a[i]='A';
		i--;
	}
	if(i==0) isOK=0;
	else a[i]='H';
}
int main(){
	int t;cin >> t;
	while(t--){
		cin >> n;
		prep();
		while(isOK){
			if(valid(a)){
			    for(int i=1;i<=n;i++) cout << a[i];
			    cout << endl;
		    }
		    next();
		}
	}
	return 0;
}
