class Solution:
    def trailingZeroes(self, N):
    	#code here 
    	if(N<0):
    	    return -1
    	count=0
    	while(N>=5):
    	    
    	    N//=5
    	    count+=N
    	return count
