#include<iostream>
#include<cstring>
using namespace std;
int n,a[100];
bool unused[100];
void Try(int i){
    for(int j=1;j<=n;j++){
        if(unused[j]){
            a[i]=j;
            unused[j]=0;
            if(i==n){
                for(int i=1;i<=n;i++){
                    cout << a[i] << " ";
                }
                cout << endl;
            }
            else Try(i+1);
            unused[j]=1;
        }
    }
}
void solve(){
    cin >> n;
    memset(unused,1,sizeof(unused));
    for(int i=1;i<=n;i++){
        a[i]=i;
    }
    Try(1);
}
int main(){
    solve();
    return 0;
}
