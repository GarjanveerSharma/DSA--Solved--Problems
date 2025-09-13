class Solution {
public:
    int maxFreqSum(string s) {
        int sum = 0; 
        unordered_map<char,int> freq; 
        string vowels = "aeiou";

        for(char ch : s){
            freq[ch]++; 
        }

        int maxVowel = 0 , maxCons = 0; 

        for(auto &x : freq){
            char ch = x.first; 
            int cnt = x.second; 

            if(vowels.find(ch) != string::npos){
                maxVowel = max(maxVowel , cnt); 
            }
            else{
                maxCons = max(maxCons , cnt); 
            }
        }
        return sum = maxVowel + maxCons; 
    }
};
