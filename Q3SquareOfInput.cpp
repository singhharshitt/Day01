#include <iostream>
using namespace std;
int sqre(int num){
  return num * num;
}
int main(){
  int num;
  cout<<"Enter number: ";
  cin>>num;
  int result= sqre(num);
  cout<<"Square of  "<<num<<" is "<<result<<endl;
  return 0;
}
  
