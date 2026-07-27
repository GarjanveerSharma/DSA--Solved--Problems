// optimal approach :) 
// TC : O(n)
// SC : O(1)
class Solution { 
public: 
    int maxProduct(vector<int>& nums) { 
       int a = 0;
       int b = 0;

     for(int x : nums){
        if(x >= a){
            b = a; 
            a = x; 
        }
        else if(x > b){
            b = x; 
        }
     }
     return (a-1)*(b-1); 
    } 
}; 

// Brute Force approach --
// TC : O(n^2)
// SC : O(1)
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size(); 
        int ans = INT_MIN; 

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                int a = nums[i]; 
                int b = nums[j];
                ans = max(ans ,(a-1)*(b-1)); 
            }
        }
        return ans; 
    }
};
