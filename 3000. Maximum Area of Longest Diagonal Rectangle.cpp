class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int ans = 0; 
        int maxdim = 0; 

        for(auto &d : dimensions){
            int dim = d[0]*d[0] + d[1]*d[1]; 
            int area = d[0]*d[1]; 

            if(dim > maxdim){
                maxdim = dim; 
                ans = area; 
            }else if(dim == maxdim){
                ans = max(ans,area);
            }
        }
         return ans; 
    }
};
