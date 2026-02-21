// ----------------------------------------------    Optimal solution -----------------------------------------------------
// tc = O(right-left+1)
// sc = O(1)  , yes as we are usng set but set is not depending on the input  

class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        unordered_set<int> prime = {2,3,5,7,11,13,17,19};    // max as constriants are 10^6 
        int count = 0;
        for(int i = left; i <= right; i++) {
            int bits = __builtin_popcount(i);   // count set bits
            
            if(prime.count(bits)) {       // if you get the bits in the set then count += 1
                count++;
            }
        }
        return count;    // return the final count 
    }
};



// -------------------------------------------   Brute Force Approach -----------------------------------------------

// tc = O((right-left+1) * log(n)^2)      
// sc = O(logn)

class Solution {
public:

    // Convert number to binary string
    string binary(int x){
        string store = "";

        while(x > 0){
            int s = x % 2;
            store = char(s + '0') + store;  
            x = x / 2;
        }

        return store;
    }

    // Check if number is prime or not
    bool isPrime(int n){
        if(n <= 1) return false;

        for(int i = 2; i * i <= n; i++){
            if(n % i == 0)
                return false;
        }
        return true;
    }

    // Count set bits and check prime
    bool issetbitsprime(string a){
        int c = 0;

        for(int i = 0; i < a.size(); i++){
            if(a[i] == '1')
                c++;
        }

        return isPrime(c);
    }

    int countPrimeSetBits(int left, int right) {
        int count = 0;

        for(int i = left; i <= right; i++){
            string b = binary(i);

            if(issetbitsprime(b)){
                count++;
            }
        }

        return count;
    }
};


