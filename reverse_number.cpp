#include<bits/c++.h>
int main() {
  cout<<"Enter the number to  be reversed"<<endl;
  int no,rem,rev;
  cin>>no;
  while(no>0) {
    rem=no%10;
    rev=rev*10+rem;
    no=no/10;
  }
  
  cout<<"The reverse of number is"<< rev<<endl;
  return 0;
}
