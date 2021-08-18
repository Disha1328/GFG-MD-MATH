class Solution{
	public:
	string fractionToDecimal(int numerator, int denominator) {
	    // Code here
	    string result = "";
        if(numerator==0){
            return "0";
        }
        
        if((numerator<0 && denominator>0)||(numerator>0 && denominator<0)){
            result.append("-");
        }

        long long int n = abs(numerator);
        long long int d = abs(denominator);
        
        
        long long int quotient = n / d;
        result += to_string(abs(quotient));
        if (n % d == 0){
            return result;
        }
        result += ".";
        
        long remainder = n % d;
        
        map<int, int> remMap;
        int index;
        while (remainder > 0) {
            
            // If the remainder is already seen,
            // then there exists a repeating fraction.
            // break the loop and print the result, after appending the remainder
            if (remMap.find(remainder) != remMap.end()) {
     
                result.insert( remMap[remainder], "(");
                
                result.append(")");
                
                break;
            }
            // if no remainder found
            // add the remainder to the map 
            // with key as remainder and value as size of the result
            else{
                remMap[remainder] = result.size();
            }
            
            remainder = remainder * 10;
 
            // Calculate quotient, append it to result and
            // calculate next remainder
            long long int temp = remainder / d;
            
            remainder = remainder % denominator;
            
            result += to_string(temp);
        }
        
        return result;
    }
};
