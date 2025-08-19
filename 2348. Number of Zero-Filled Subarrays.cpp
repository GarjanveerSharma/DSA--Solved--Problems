class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long k = 0; 
        long long sum = 0; 

        for(int num : nums){
            if(num == 0){
                k++; 
                sum += k; 
            }
            else if(num != 0){
                k = 0; 
            }
        }
        return sum; 
    }
};
