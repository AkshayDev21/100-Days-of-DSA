#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if(x < y){
	        cout<<"REPAIR";
	        
	    }
	    if(x > y){
	       cout<<"NEW PHONE";
	       
	    } 
	    if(x==y){
	        cout<<"ANY";
	        
	    }
	    cout<<endl;
	}
	return 0;
}
