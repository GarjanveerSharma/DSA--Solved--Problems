class Solution {
public:
    long long flowerGame(int n, int m) {
       long long OddPairX = (n+1)/2; 
       long long EvenPairX = n/2; 
       long long OddPairY = (m+1)/2; 
       long long EvenPairY = m/2; 
   
     // Logic = odd*even = odd ....  even*odd = odd. 
       return OddPairX * EvenPairY + OddPairY * EvenPairX;    
    }
};
