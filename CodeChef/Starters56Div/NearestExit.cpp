#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    if(x <= 50){
	        cout<<"LEFT";
	    }
	    else{
	        cout<<"RIGHT";
	    }
	    cout<<endl;
	}
	return 0;
}
