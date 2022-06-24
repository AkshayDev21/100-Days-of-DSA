#include <iostream>
using namespace std;
int GCD(int a , int b){
    if(b == 0){
        return a;
    }
    return GCD(b , a%b);
}
int main() {
    
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	    }
	    
	int commomGcd = GCD(a[0] , a[1]);
	for(int i = 2 ; i<n ; i++){
	    commomGcd = GCD(commomGcd , a[i]);
	}
	bool ispresent = false;
	for(int i = 0 ; i<n ; i++){
	    if(commomGcd == a[i]){
	        ispresent = true;
	        break;
	    }
	}
	
	if(ispresent){
	    cout<<n;
	}else{
	    cout<<0;
	}
	cout<<endl;
	}
	
	return 0;
	
}
