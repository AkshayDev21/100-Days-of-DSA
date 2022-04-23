#include <iostream>
using namespace std;

class Hero {
    //properties
    private:
    int health;

    public:
    char level;

    int gethealth() {
        return health;
    }

    char getlevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setlevel(char  ch){
        level = ch;
    }
    
    Hero(){
        cout<<"Destructor Called"<<endl;
    }
};

int main() {

    Hero akshay;
}