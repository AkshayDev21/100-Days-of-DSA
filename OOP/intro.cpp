#include <iostream>
using namespace std;

class Hero {
    //properties
    public:
    int health;  
    char level;
};

int main() {
    //create object
    Hero akshay ;
    akshay.health = 90;
    akshay.level = 'A';

    cout<<"Health is : "<< akshay.health <<endl;
    cout<<"Level is : "<< akshay.level << endl;
    return 0;
}