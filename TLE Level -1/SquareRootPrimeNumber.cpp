#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Square Root Method T.C - 0(SqaureRoot(N))
bool squareRoot(int n){
    if(n<2) return false;

    for(int i=2; i*i<=n; i++){
        if(n%i==0) return false;
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    bool ans = squareRoot(n);
    if(ans) cout<<"It is a prime Number"<<endl;
    else cout<<"It is not a prime Number"<<endl;
    return 0;
}