#include <iostream>
using namespace std;

int main(){
  int n, number;
  cin>>n;

  int i = 2;
  while (i<=n-1) {
    if(n%i==0){
      break;
      
    }
    else if (i==n-1){
      cout<<i<<endl;
    }
    
  }

  return 0;
}
