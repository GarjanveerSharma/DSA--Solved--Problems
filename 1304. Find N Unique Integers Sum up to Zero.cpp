class Solution {
public:
    vector<int> sumZero(int n) {
       vector<int> ans; 

       for(int i=1; i<=n/2; i++){
        ans.push_back(i);  // for positive cases. 
        ans.push_back(-i);  // for negative cases.
       }

       if(n%2 != 0){             // if odd then add one zero. 
        ans.push_back(0); 
       }
       return ans; 
    }
};
