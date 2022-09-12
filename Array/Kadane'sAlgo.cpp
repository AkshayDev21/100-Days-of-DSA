long long maxSubarraySum(int arr[], int n){
        int maxsum =arr[0];
        int currsum=0;
        for(int i=0; i<n; i++){
            currsum = currsum + arr[i];
            if(currsum > maxsum){
                maxsum = currsum;
            }
            if(currsum < 0){
                currsum =0;
            }
        }
        return maxsum;
        // Your code here
        
    }