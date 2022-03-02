//                              Date:- 1 March,2022

// 338. Counting Bits

/*

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> arr;
        int BitsSetTable256[256];
        for(int i=0;i<=n;i++){
            arr.push_back(__builtin_popcount(i));
        }
        return arr;
    }
};

*/