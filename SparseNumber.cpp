//sparse number are number whose two more consucutive bits in binary are not set
#include<bits/stdc++.h>
using namespace std;

bool sparse(int n){
  return n&(n>>1);
}

int main(){
  int n;
  cin>>n;
  cout<<sparse(n);
}
