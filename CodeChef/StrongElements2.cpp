#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void FillPrefixSuffix(int prefix[], int arr[], int suffix[], int n){
    prefix[0] = arr[0];
    for(int i=1; i<n; i++){
        prefix[i] = __gcd(prefix[i-1], arr[i]);
    }
    suffix[n-1] = arr[n-1];
    for(int i=n-2; i>=0; i--){
        suffix[i] = __gcd(suffix[i+1], arr[i]);
    }
}

int GCDout(int l, int r, int prefix[], int suffix[], int n){
    if (l==0){
        return suffix[r+1];
    }
    if (r==n-1){
        return prefix[l-1];
    }
    return __gcd(prefix[l-1], suffix[r+1]);
}


int main() {
    
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	    int prefix[n], suffix[n];
	    int arr[n];
	    
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    
	    FillPrefixSuffix(prefix, arr, suffix, n);
	    
	    int ans =0;
	    for(int i=0; i<n; i++){
	        if (GCDout(i, i, prefix, suffix,n)>1){
	            ans++;
	        }
	    }
	    cout<< ans << endl;
	}
	return 0;
	
}
