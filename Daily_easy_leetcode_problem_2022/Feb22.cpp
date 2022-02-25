

// Problem


/*
C++ Solution | TC: O(n) | SC: O(1) | Easy Explanation
**Method 1 **
Given:- S = "CDAB"

Step 1:- result = 0, c = 'C' --> result = 0x26. --> result = 0 + ('C'-'A' +1) = 3.
as we know if we do 'C' - 'A' gives 2.
Step 2:- result = 3x26, c = 'D' --> result = 3x26 + ('D' -'A' +1) = 3x26 + 4.
Step 3:- result =(3x26 + 4)x26 , c = 'A' --> result = (3x26 + 4)x26 + ('A' -'A' +1) =(3x26 + 4)x26 + 1.
Step 4:- result =(3x26x26 + 4x26 + 1)x26, c = 'B' --> result = (3x26x26 + 4x26 + 1)*26 + ('B' -'A' +1) =(3x26x26 + 4x26 + 1)x26+ 2.
now result = 3x26x26x26 + 4x26x26 + 1x26+ 2.

*/
// Implementation 

/*
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0;
        for(auto c:columnTitle){
            result *= 26;
            result += c -'A' + 1;
        }
        return result;
    }
};

*/


/*
Method 2

Now we can analyse from the above result , we can also write result = 3xpow(26,3) + 4xpow(26,2) + 1xpow(26,1) + 2xpow(26,0).
*General formula, result = (S[0] - 'A' +1 )x pow(26,n-0-1) + (S[1] - 'A' +1 )x pow(26,n-1-1) + (S[2] - 'A' +1 )x pow(26,n-2-1) + (S[3] - 'A' +1 )x pow(26,n-3-1).
It's similar to binary and decimal conversion but here we take base 26.

*/


/*

class Solution {
public:
    int titleToNumber(string s) {
        int result = 0;
        int n = s.length();
        reverse(s.begin(),s.end());
        for(int i=0;i<n;i++){
            result += (s[i]-'A' + 1)*pow(26,i);
        }
        return result;
    }
};

*/

//                              Discussion Solution

/*

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n = columnTitle.size()-1;
        int res=0;
        int k=0;
        for(char s:columnTitle){
            int val = pow(26,(n-k)) * (s - 'A' +1);
            res += val;
            k++;
        }
        return res;
    }
};
*/