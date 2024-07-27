#include <iostream>
using namespace std;

int main(){
  int n;
  cout<<"please enter a number: "; 
  cin>>n;
  int i = 0;
  int rev = 0; 
  while(n>0){
    int digit = n%10;
    n = n/10;
    rev = (rev*10)+digit;
  }
  cout<<rev<<endl;
  return 0;
}
