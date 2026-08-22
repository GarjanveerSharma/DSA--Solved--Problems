// 3622. Check Divisibility by Digit Sum and Product
// EASY

class Solution {
public:
    bool checkDivisibility(int n) {
        string s = to_string(n); 

        int a = n; 
        int b; 
        int sum = 0; 
        int pro = 1; 
        while(a>0){
            b=a%10; 
            sum+=b; 
            pro*=b; 
            a/=10; 
        }

        int sum2 = sum+pro; 

        return n%sum2==0; 
    }
};
