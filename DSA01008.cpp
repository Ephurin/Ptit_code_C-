#include<bits/stdc++.h>
using namespace std;
int a[20],n,k,isOK;
bool valid(int a[],int n,int k){
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(a[i]==1) cnt++;
	}
	if(k==cnt) return true;
	return false;
}
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
		cin >> n >> k;
		prep();
		while(isOK){
			if(valid(a,n,k)){
				for(int i=1;i<=n;i++){
					cout << a[i];
				}
				cout << endl;
			}
			sinh();
		}
    }
    return 0;
}
