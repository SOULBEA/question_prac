#include<iostream>
using namespace std;

int main(){
  char n;
  cout<<"please enter a chacracter: ";
  cin>>n;

  if(n>='a' && n<='z'){
    cout<<"you entered an lower case character: "<<n<<endl;

  }
  else if(n>='A' && n<='Z'){
    cout<<"you entered an upper case character: "<<n<<endl;

  }
  //else cout<<"You entered an invalid input: "<<n;
  return 0;
}
