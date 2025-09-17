class Solution {
public:
    int minBitFlips(int start, int goal) {
        int x = start ^ goal; 
      return __builtin_popcount(x); 
    }
};


/*
 int x = start ^ goal;  // after the xor the total number of one(1) will be the answer. 
 int cnt = 0; 
 whie(x>0){
    cnt += (x & 1);  // count the number of one
    x = x >> 1;        // right shift. 
 }
*/ 

