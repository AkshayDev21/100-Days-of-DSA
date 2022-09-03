#include <iostream>
using namespace std;

int fibo(int n){
    //Base case 
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    //Recursive Call
    int call = fibo(n-1) + fibo(n-2);
    return call;
}

int main(){
    int n;
    cin>>n;
    int ans = fibo(n);
    cout<<ans<<endl;
    return 0;
}