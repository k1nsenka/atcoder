#include"bits/stdc++.h"
using namespace std;

int main(){
    int a,b,c,ans;
    cin >> a >> b >> c;
    ans = c - a + b;
    if(ans < 0){
        cout << 0 << endl;
    }else{
        cout << ans << endl;
    }
    return 0;
}