#include<bits/stdc++.h>
using namespace std;

int GtoB(int n){
  int num = n;

  while (n>=1){
      n=n>>1;
    num = (num^n);
  }
return num;
}

int main(){
  int n;
  cin>>n;
  cout<<GToB(n);
}
