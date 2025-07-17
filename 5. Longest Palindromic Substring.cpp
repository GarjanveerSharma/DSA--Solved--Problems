class Solution {
public:
    int expand(string s , int left , int right){
   while(left >=0 && right < s.size() && s[left] == s[right]){
      left--; 
      right++; 
   }
   return right - left - 1; 
    }
    string longestPalindrome(string s) {
     int maxlength = 0; 
     int start = 0; 

     for(int i=0; i<s.size(); i++){
        int len1 = expand(s,i,i);       // for odd
        int len2 = expand(s,i,i+1);    // for even
        int len = max(len1 , len2);

        if(len > maxlength){
            maxlength = len; 
            start = i - (len - 1)/2;   // starting point of palindrome
        } 
     }      
     return s.substr(start , maxlength); 
    }
};class Solution {
public:
    int expand(string s , int left , int right){
   while(left >=0 && right < s.size() && s[left] == s[right]){
      left--; 
      right++; 
   }
   return right - left - 1; 
    }
    string longestPalindrome(string s) {
     int maxlength = 0; 
     int start = 0; 

     for(int i=0; i<s.size(); i++){
        int len1 = expand(s,i,i);       // for odd
        int len2 = expand(s,i,i+1);    // for even
        int len = max(len1 , len2);

        if(len > maxlength){
            maxlength = len; 
            start = i - (len - 1)/2;   // starting point of palindrome
        } 
     }      
     return s.substr(start , maxlength); 
    }
};
