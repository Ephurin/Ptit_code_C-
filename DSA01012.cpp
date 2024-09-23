#include<bits/stdc++.h>
using namespace std;
int a[20],n,isOK;
void prep(){
	isOK=true;
	for(int i=1;i<=n;i++){
		a[i]=0;
	}
}
void sinh(){
	int i=n;
	while(i>=1&&a[i]==1){
		a[i]=0;
		i--;
	}
	if(i==0) isOK=false;
	else a[i]=1;
}
int main(){
	int t;cin >> t;
	while(t--){
		cin >> n ;
		prep();
		while(isOK){
			for(int i=1;i<=n;i++){
				cout << a[i];
			}
			cout << " ";
			sinh();
		}
		cout << endl;
    }
    return 0;
}
