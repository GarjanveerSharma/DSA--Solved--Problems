// using memo + recursion 
class Solution {
public:
int t[101]; 
int solve(vector<int>& nums , int i , int n){
    if(i > n) return 0; 

    if(t[i] != -1) return t[i]; 

    int steal = nums[i] + solve(nums , i+2 , n); 
    int skip = solve(nums , i+1 , n); 

    return t[i] = max(steal , skip); 
}
    int rob(vector<int>& nums) {
        int n = nums.size(); 

        if(n == 1) return nums[0]; 

        if(n == 2) return max(nums[0] , nums[1]); 

      memset(t , -1 , sizeof(t)); 
 
      // case - 1
      int x = solve(nums , 0 , n-2);    // steal 0 index house 
      memset(t , -1 , sizeof(t));
      
      // case - 2
      int y = solve(nums , 1 , n-1);    // steal 1 index house 

      return max(x , y);
    }
};





// using bottom up
class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size(); 

        if(n == 1) return nums[0]; 

        vector<int> t(n+1 , 0); 
      
      int result1;  
      int result2; 

      // case 1
     
        t[0] = 0; 
     for(int i=1; i<=n-1; i++){
        int skip = t[i-1]; 
        int steal = nums[i-1] + ((i-2 >= 0) ? t[i-2] : 0);  // out of bound na chala jaye i=1 -> 1-2 = -1

        t[i] = max(skip , steal); 
     }
     result1 = t[n-1]; 

     t.clear(); 
      
      // case 2

     t[0] = 0; 
     t[1] = 0; 

     for(int i=2; i<=n; i++){
       int skip = t[i-1]; 
       int steal = nums[i-1] + ((i-2 >= 0) ? t[i-2] : 0);  // out of bound na chala jaye i=1 -> 1-2 = -1
       
       t[i] = max(skip , steal); 
     }

     result2 = t[n];

     return max(result1 , result2);  
    }
};
