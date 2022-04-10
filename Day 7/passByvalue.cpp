#include <iostream>
using namespace std;

void dummy(int n){
    n++;
    cout<<"n is a "<<n<<endl;
}
int main(){
    int n;
    cin>>n;
    dummy(n);
    cout<<"number is a "<<n<<endl;
}