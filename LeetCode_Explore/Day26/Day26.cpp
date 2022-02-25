//                                          Date:- 26 Feb,2022

// Problem:- 168. Excel Sheet Column Title



/*
class Solution {
public:
    string convertToTitle(int columnNumber) {
        string s;
        int i=0;
        while(columnNumber){
            s[i] = (columnNumber-1)%26;
            columnNumber =  (columnNumber-1)/26;
            s += char(s[i] + 'A');
            i++;
        }
        reverse(s.begin(),s.end());
        return s;
    }
};

*/

//                          Discussion solution

/*


class Solution {
public:
    string convertToTitle(int n) {
        string result;
        while (n) {
            result.push_back('A' + (n - 1) % 26), n = (n - 1) / 26;    
        }
        reverse(result.begin(), result.end());
        return result;
    }
};

*/




//                   ANother Solution

/*

class Solution {
public:
    string convertToTitle(int n) {
        // 
        // Consider n as a three-char string;
        // n = a * 26^2 + b * 26 + c; 1 <= (a,b,c) <= 26
        // 
        string s;
        while(n>0){
            int tail = n % 26; // tail represents c;
            if(tail == 0){
                tail = 26;  //c must be 26, thus last char mush be 'Z'; 
                s = 'Z' + s;
            }else{
                char c = 'A' + tail - 1;
                s = c + s;
            }
        
            n = n - tail;   // Remove last number and divided by 26;
            n = n / 26;     // In this way, b will be the last number for next iteration.
        }
        return s;
    }
};
*/