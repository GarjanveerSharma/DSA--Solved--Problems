class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> freq; 

        for(int num : nums){
            freq[num]++; 
        }

        int maxi = 0; 
        for(auto &x : freq){
            maxi = max(maxi , x.second); 
        }

        int cnt = 0; 
        for(auto &x : freq){
       if(x.second == maxi) cnt++; 
        }

        return cnt * maxi; 
    }
};
