int maxProduct(vector<int>& nums) {
        int ans = nums[0];
        int maxsum = ans;
        int minsum = ans;
        for(int i=1; i<nums.size(); i++){
            if(nums[i] < 0){
                swap(maxsum, minsum);
            }
            maxsum = max(nums[i], maxsum*nums[i]);
            minsum = min(nums[i], minsum*nums[i]);
            ans = max(ans, maxsum);
        }
        return ans;
    }