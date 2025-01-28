#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Brute Force Method T.C - 0(N)
bool primeBrute(int num){
  if(num<2){
    return false;
  }

  for(int i=2; i<num-1; i++){
    if(num%i==0) return false;
  }

  return true;
}

int main(){
    int num;
    cin>>num;
    bool ans = primeBrute(num);
    if(ans) cout<<"Yes It is a prime Number"<<endl;
    else cout<<"No, It is not a prime number"<<endl;
    return 0;
}