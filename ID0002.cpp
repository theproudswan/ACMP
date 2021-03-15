#include <iostream>

using namespace std;

int main(){

  int n, s=0;
  cin>>n;
  if (n>0){
    for(int i=1; i<n+1; i++){
      s+=i;
    }
  } else {
    for (int i=n; i<=1;i++){
      s+=i;
    }
  }
  cout<<s<<endl;
  return 0;
}
