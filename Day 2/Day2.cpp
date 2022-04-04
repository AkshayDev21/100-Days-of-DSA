#include<iostream>
using namespace std;

int main() {

    //Data Types and Operators
    int a = 'a';
    cout<< a << endl;

    int b = 2/5;
    cout<< b << endl;

    int c = 5;
    int d = 6;

    bool first = (c==d);
    cout<< first << endl;

    bool second = (c<d);
    cout<< second << endl;

    int e = 0;
    cout<< !e <<endl;

    // Conditional & Loops
    int g;
    cin>>g;
    
    if(g>0){
        cout << "A is a Positive"<< endl;
    }
    else{
        cout << "A is a Negative"<< endl;
    }
}