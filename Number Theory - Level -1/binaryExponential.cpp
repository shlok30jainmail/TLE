// it is used in place of pow function
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int binaryExpo(int a, int b){
   if(b==0) return 1;

   int halfSum = binaryExpo(a, b/2);
   if(b%2==0){
    return halfSum*halfSum;
   }else
     return halfSum * halfSum * a;
   
}
int main(){
     int a,b; // a^b
     cin>>a>>b;
     int ans = binaryExpo(a,b);
     cout<<ans<<endl;

    return 0;
}