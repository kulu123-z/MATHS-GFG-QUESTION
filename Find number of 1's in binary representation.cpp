#include<bits/stdc++.h>

int countSetBits(int n){
    //Brian Kernighan’s Algorithm for finding bit set of perticular number 
        int count=0;
        while(n){
            count++;
            n=n & (n-1);
        }
        return count;
}

int main(){
  int n;
  cin>>n;
  cout<<countSetbits(n);
}
