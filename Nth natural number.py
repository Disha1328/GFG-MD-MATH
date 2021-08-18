class Solution{
	public:
    	long long findNth(long long N)
    {
        // code here.
        long long first= 1, num=0;
        while(N>0){
            num= num+ (first* (N%9));
            N= N/9;
            first= first*10;
            
        }
        return num;
    
    }
};
