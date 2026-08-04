class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans; 
        unordered_map<int,int> freq; 
        sort(nums.begin() , nums.end()); 

        for(int num : nums) freq[num]++; 

        int mini = nums.front() , maxi = nums.back();

        for(int i=mini; i<=maxi; i++){
            if(freq.find(i) == freq.end()){
                ans.push_back(i); 
            }
        }
        return ans; 
    }
};
