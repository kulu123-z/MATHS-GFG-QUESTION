#include<bits/stdc++.h>
using namespace std;

bool isPowerofTwo(long long n){
  if(n==0) return false;
  return(!(n&(n-1)));
}
int main(){
  long long n;
  cin>>n;
  cout<<isPoweroftwo(n);
}
