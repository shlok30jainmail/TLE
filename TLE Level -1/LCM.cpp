#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// T.c - 0(logN) 
// formula for LCM = a*b / gcd(a,b)
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
    int LCM = (a*b)/gcd(a,b);

    cout<<"LCM of "<<a<<" and "<<b<<" is : "<<LCM<<endl;
    return 0;
}