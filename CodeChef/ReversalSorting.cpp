#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    int arr[n];
	    for(int i=0; i<n;i++){
	        cin>>arr[i];
	    }
		
	    bool ans =true;
	    
	    for(int i=0; i<n-1;i++){
	        if(arr[i]>arr[i+1]){
	            if(arr[i]+ arr[i+1]<=x){
	                swap(arr[i],arr[i+1]);
	            }
	            else{
	                ans=false;
	                break;
	            }
	        }
	    }
	    if(ans==true){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
