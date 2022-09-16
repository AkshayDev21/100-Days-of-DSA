class Solution
{
    public:
    
        bool fact(int mid, int n){
            int prod=5, c=0;
            while(prod <= mid){
                c += (mid/prod);
                prod = prod*5;
            }
            return c>=n;
        } 
        
        int findNum(int n)
        {
            if(n==1){
                return 5;
            }
            
            int a=0, b = 5*n;
            while(a<b){
                int mid = a + (b-a)/2;
                if(fact(mid,n)){
                    b = mid;
                }
                else{
                    a = mid+1;
                }
                
                
            }
           
            return a;
        
        }
};