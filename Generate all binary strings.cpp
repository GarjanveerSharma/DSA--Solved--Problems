class Solution {
  public:
    vector<string> generateBinaryStrings(int num) {
        vector<string> ans; 
        string current = ""; 
        check(num , current , ans); 
        return ans; 
    }
    void check(int num , string& current , vector<string>& ans){
        if(current.size() == num){
            ans.push_back(current); 
            return; 
        }
        
        // Always Add '0'
        current.push_back('0');
        check(num,current,ans); 
        current.pop_back(); 
        
        // Add '1' only if previous one is not '1'
        if(current.empty() || current.back() == '0'){
            current.push_back('1'); 
            check(num,current,ans); 
            current.pop_back(); 
        }
    }
};
