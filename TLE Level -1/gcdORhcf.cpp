#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// T.c - 0(logN) 
int gcd(int a, int b){
    while(a){
        int t= a;
        a = b%a;
        b =t;
    }
    return b;
}

int main(){
    int a,b;
    cin>>a>>b;
    int ans = gcd(a,b);
    cout<<"GCD of "<<a<<" and "<<b<<" is : "<<ans<<endl;
    return 0;
}