#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"please enter a number: ";
  cin>>n;
  int i =0;
  int rev = 0;
  int dup = n;
  while(n>0){
    int digit = n%10;
    n = n/10;
    rev = (rev*10)+digit;

  }
  if(dup == rev){
    cout<<"palindrome";
  }
  else{
    cout<<"not palindrome";
  }
  return 0;
}
