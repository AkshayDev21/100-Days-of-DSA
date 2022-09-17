#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int R1,R2,R3,R4;
	    cin>>R1>>R2>>R3>>R4;
	    if(R1 == 1 || R2== 1  || R3 == 1|| R4 == 1){
	        cout<<"OUT";
	    }
	    else{
	        cout<<"IN";
	    }
	    cout<<endl;
	}
	return 0;
}
