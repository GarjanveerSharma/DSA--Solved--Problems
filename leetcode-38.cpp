// 38. Count and Say

class Solution {
public:
string CAS(string x){
    string ans = ""; 

    int i=0; 
    while(i<x.size()){
        int cnt = 1; 
        while(i+1 < x.size() && x[i] == x[i+1]){
            cnt++;
            i++;
        }
        ans += to_string(cnt); 
        ans += x[i]; 
        i++; 
    }
  return ans;
}
    string countAndSay(int n) {
        string ans = "1"; 

        for(int i=2; i<=n; i++){ 
            ans = CAS(ans); 
        }
        return ans; 
    }
};
