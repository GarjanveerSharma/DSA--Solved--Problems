// TC : O(n)
// SC : O(1)

class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size(); 

        bool flag = false;
        
        // odd
        int i=0;  
        int mini=INT_MAX; 
        while(i<n){
            if(nums1[i]%2!=0){
                mini=min(mini,nums1[i]);
            }
            i++;
        }

        // even
        int x=0;  
        while(x<n){
            if(nums1[x]%2==0){
                if(mini!=INT_MAX && nums1[x]<mini){
                    return false;
                }
            }
            x++;
        }

        flag = true;

        return flag; 
    }
};
