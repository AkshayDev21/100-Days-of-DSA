#include <iostream>
using namespace std;

int main(){
    int num =5;
    cout<<"The address of num is "<<&num<<endl;

    int *ptr = &num;
    cout<<"Value is "<<*ptr<<endl;
    cout<<"Address is "<<ptr<<endl;

    double d = 4.5;
    double *p2 = &d;
    cout<<"Value is "<<*p2<<endl;
    cout<<"Address is "<<p2<<endl;
}