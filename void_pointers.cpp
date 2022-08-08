#include<bits/stdc++.h>
using namespace std;
int main(){
  int n = 56;
  void *ptr = &n;
  cout<<*((int*)ptr)<<endl;
return 0;
}