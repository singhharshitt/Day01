#include <iostream>
#include <string>
using namespace std;

int main() {
    int grade1,grade2, grade3, grade4, grade5;
    cout<<"Enter grade 1: ";
    cin>>grade1;
    cout<<"Enter grade 2: ";
    cin>>grade2;
    cout<<"Enter grade 3: ";
    cin>>grade3;
    cout<<"Enter grade 4: ";
    cin>>grade4;
    cout<<"Enter grade 5: ";
    cin>>grade5;
    float avg= (float)(grade1+grade2+grade3+grade4+grade5)/5;
    cout<<"The average grade is "<<avg<<endl;
    
    return 0;
}
