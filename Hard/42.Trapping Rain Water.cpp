class Solution {
public:
    int trap(vector<int>& a) {
        int n = a.size();//array size
        int water = 0;
        int lm[n],rm[n]; //initialising two arraya leftmax & right max
        
        
        lm[0] = a[0]; // initialising leftmax of zero index of array as 0
        for(int i=1;i<n;i++)// here i is equal to 1 because we will start comparison from array index number one as we have already inintialised leftmax of zero index element as element it self then we will compare till last element in array of size n 
        {
            lm[i] = max(a[i], lm[i-1]);//now leftmax(lm) will be max of current index element and previous index element 
        } 
        
        
        rm[n-1] = a[n-1];//initialising rightmax of last index of array size n as n-1 l
        for(int i=n-2;i>=0;i--)// here i is equal to n-2 because we will start comparison from last second index and we will compare till 0th index as we have already initialised rightmax for last element.
        {
            rm[i] = max(a[i], rm[i+1]);// now rightmax(rm) will be maximum of current index element and rightmax of precedence index element
        }
        // with this we have created two arrays leftmax and rightmax and now we will find solution
        for(int i=0;i<n;i++)
        {
            water+=min(lm[i],rm[i]) - a[i];//now water will be stored in the min of leftmax array and rightmax array - targeted index array element and all values of output(water) and retur that value
        }
    
        return water;
    }
};


//Time complexity: O(n)
// Space complexity: O(n)
