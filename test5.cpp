#include<iostream>
#include<iomanip>
using namespace std;
int a[100],b[100],val[100],mas[100],n,k,isOK;
void next(){
    int i=n;
    while(i>=1&&a[i]==1){
        a[i]=0;
        i--;
    }
    if(i==0) isOK=0;
    else a[i]=1;
}
int mass(int a[]){
    int tmp=0;
    for(int i=1;i<=n;i++){
        if(a[i]==1) tmp+=mas[i];
    }
    return tmp;
}
int vall(int a[]){
    int tmp=0;
    for(int i=1;i<=n;i++){
        if(a[i]==1) tmp+=val[i];
    }
    return tmp;
}
void solve(){
    cin >> n >> k;
    for(int i=1;i<=n;i++){
        cin >> mas[i];
    }
    for(int i=1;i<=n;i++){
        cin >> val[i];
    }
    for(int i=1;i<=n;i++){
        a[i]=0;
    }
    isOK=1;
    int tmpmas=9999,tmpval=0;
    while(isOK){
        if(mass(a)<k&&vall(a)>tmpval){
            tmpmas=mass(a);
            tmpval=vall(a);
            for(int i=1;i<=n;i++){
                b[i]=a[i];
            }
        }
        else if(mass(a)<tmpval&&vall(a)==tmpval){
            tmpval=mass(a);
            tmpval=vall(a);
            for(int i=1;i<=n;i++){
                b[i]=a[i];
            }
        }
        next();
    }
    double x=tmpval;
    cout << fixed << setprecision(1) << x << endl;
    for(int i=1;i<=n;i++){
        cout << b[i] << " ";
    }
}
int main(){
    solve();
    return 0;
}
