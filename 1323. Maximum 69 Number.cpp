class Solution {
public:
    int maximum69Number (int num) {
        std::string s = std::to_string(num);       // number to string 
        for (char &c : s) {
            if (c == '6') { c = '9'; break; }       // one by one check and convert
        }
        return std::stoi(s);   // convert string to integer 
    }
};
