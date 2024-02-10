// Missing number in array

int missingNumber(vector<int>& array, int n) {
        // Your code goes here
        int sum=n*(n+1)/2;
    
        int sum1=0;
        for(int i=0;i<n-1;i++){
            sum1=sum1+array[i];
        }
        
        int ans= sum-sum1;
        return ans;
        
    }
