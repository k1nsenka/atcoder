#include"bits/stdc++.h"
using namespace std;

int main(){
    int N;
    cin >> N;
    int a[N];
    for(int i=0; i<N; i++) cin >> a[i];
    for(int i=0; i<N; i++){
        int max = 0;
        for(int j=0; j<N; j++){
            if(max<a[j] && i!=j){
                max = a[j];
            }
        }
        cout << max << endl;
    }
    return 0;
}