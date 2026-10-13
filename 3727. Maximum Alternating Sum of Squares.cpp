class Solution {
public:
typedef long long ll; 
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size(); 
 
     for(int& x : nums){
        x = x*x; 
     }

    sort(nums.begin() , nums.end()); 

     int h = n/2;     // half path

     ll ans = 0; 
    
    // first half part 
    for(int i=0; i<h; i++){
       ans -= nums[i]; 
    } 

    // second half part 
    for(int i=h; i<n; i++){
        ans += nums[i];  
    }

    return ans; 
    }
};
