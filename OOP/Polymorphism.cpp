#include<iostream>
using namespace std;

class A{
    public:
    void sayhello(){
        cout<<"Hello Akshay:"<<endl;
    }

    void sayhello(string name){
        cout<<"Hello "<< name <<endl;
    }
};
int main(){
    A obj;
    obj.sayhello();

    return 0;
}
