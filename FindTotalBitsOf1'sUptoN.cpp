#include<bits/stdc++.h>

int findSetBits(int n)
{
    int total=0;
    for(int i=1;i<=n;i++){
      //Brian Kernighan’s Algorithm for finding bit set of perticular number 
        int count=0;
        int x=i;
        while(x){
            count++;
            x=x & (x-1);
        }
        total+=count;
     }
     return total;
}

int main(){
  int n;
  cin>>n;
  cout<<findSetBits(n);
}
