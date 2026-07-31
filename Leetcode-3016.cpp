// 3016. Minimum Number of Pushes to Type Word II
class Solution {
public:
  // TC : (n + 26log(26)) ~ O(n)
  // SC : O(26) ~ O(1)
    int minimumPushes(string word) {
        unordered_map<char, int> m;     

        for (char c : word)     
            m[c]++;

        vector<int> a;   
                     
        for (auto& x : m)
            a.push_back(x.second);

        sort(a.rbegin(), a.rend());   

        int ans = 0;

        for (int i = 0; i < a.size(); i++) {
            ans += a[i] * (i / 8 + 1);
        }
        return ans;
    }
};
