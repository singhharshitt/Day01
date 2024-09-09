#include <iostream>
#include <string>
using namespace std;

int main() {
    string name1;
    string name2;
    cout<<"Enter the first string: ";
    getline(cin,name1);
    cout<<"Enter the second string: ";
    getline(cin, name2);
    cout<<"This is concatinated string: "<<name1+name2<<endl;
    return 0;
    
}
