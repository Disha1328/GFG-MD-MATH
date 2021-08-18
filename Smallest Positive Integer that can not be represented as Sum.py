class Solution:
    def smallestpositive(self, arr, n): 
        # Your code goes here
        res = 1
        arr.sort()
        res=1
        for i in range (0,n):
            if arr[i]<=res:
                res= res+arr[i]
            else:
                break
        return res
