#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void far(){
    long long n,m;
    cin>>n>>m;
    long long arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    long long min =1, mx =m;
    long long sum =0;
    for(int i=0; i<n;i++){
        sum += max(abs(arr[i]-1),abs(arr[i]-mx));
    }
    cout<<sum<<endl;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    far();
	}
	return 0;
}
