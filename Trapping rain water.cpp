//Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it is able to //trap after raining.

//Input: [0,1,0,2,1,0,1,3,2,1,2,1]
//Output: 6

// solution: 
//Time complexity: O(n)  space complexity : O(n)

class Solution {
public:
    int trap(vector<int>& height) {
        //Method 1:
        //Time complexity: O(n)  space complexity : O(n)
     /*   int res=0;
        int n=height.size();
       
        if(height.size()==0)
        return 0;
       
        int lmax[n];
        int rmax[n];
        lmax[0]=height[0];  // to store the left max elements
        rmax[n-1]=height[n-1]; // to store right max elements
        
        for(int i=1;i<n;i++)
            lmax[i]=max(lmax[i-1],height[i]);
        
        for(int i=n-2;i>=0;i--)
            rmax[i]=max(rmax[i+1],height[i]);
        
        
        for(int i=1;i<n-1;i++)    // first and last block will not be considered
          res+=min(lmax[i],rmax[i])-height[i];
          
        return res;   */
        
      //  Method 2: instead of making two left and right max array which stores the maximum height on left and right 
    //side , we will use two pointers to do the smae thing so that it takes O(1) space;
    // Time: O(1) space:O(1)
    int left=0,right=n-1;
    int left_max=0,right_max=0;
    int res=0;
    
    while(left<right){
        
        //if min is left indexed element
        if(arr[left]<arr[right]){
            left_max>=arr[left]?res+=left_max-arr[left]:left_max=arr[left];
            left++;
        }
        
        //if min is right indexed element
        else{
         right_max>=arr[right]?res+=right_max-arr[right]:right_max=arr[right];
         right--;
      }
    }
        
    return res;
    }
    
};
