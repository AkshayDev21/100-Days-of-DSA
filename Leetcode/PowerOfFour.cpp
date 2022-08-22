class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n < 1 ) return false;
        
        int num = n;
        int count =0;
        while(num >1 ){
            num >>= 2;
            count += 2;
        }
        return (num << count) == n;
    }
};