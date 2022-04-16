#include <iostream>
using namespace std;
int main(){
    int num =1;
    char ch ='a';
    cout<<endl;
    switch (num){
        case 1: switch(ch){
            case 'a':cout<<"First"<<endl;
            break;
        }
            break;
        case 2: cout<<"Second"<<endl;
            break;
        default: cout<<"It is default case"<<endl;
    }
}