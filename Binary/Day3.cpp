#include<iostream>
using namespace std;

int main(){

    //Program for finding number which is greater
    int a,b;

    cout<<"Enter the number a"<< endl;
    cin>>a;

    cout<<"Enter the number b"<< endl;
    cin>>b;

    if(a>b) {
        cout<<"A is greater than B"<< endl;
    }
    if(b>a) {
        cout<<"B is greater than A"<< endl;
    } 

     

    // Program for Positive, negative and zero Number
    int c;
    cout<<"Enter the number c"<< endl;
    cin>>c;

    if(c>0){
        cout<<"C is a Positive Number" << endl;
    }
    else if(c<0){
        cout<<"C is a Negative Number" << endl;
    }
    else{
        cout<<"C is 0" << endl;
    }
    

    //Looping 2 e.g
    int n;
    cin>>n;

    int i = 0;

    while(i<=n){
        cout<<i<<endl;
        i = i+1;
    }
 

    //Looping 2 e.g
    int n;
    cin>>n;

    int i = 1;
    int sum=0;

    while(i<=n){
        sum = sum + i;
        i = i+1;
    }

    cout<<"Value of Sum is "<<sum<<endl;




    


}