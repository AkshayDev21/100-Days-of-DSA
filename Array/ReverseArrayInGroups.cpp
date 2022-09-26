void reverse(vector<long long> &arr, int i, int j){
        int temp;
        while(i<j){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
    
    void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        int i=0;
        while(i<n-k){
            reverse(arr, i, i+k-1);
            i += k;
            
        }
        k = n%k;
        reverse(arr, i, i+k-1);
    }