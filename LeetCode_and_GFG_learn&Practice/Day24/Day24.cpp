//                                              Date:- 24 Feb,2022


// Problem: 2180. Count Integers With Even Digit Sum

/*

Today i Participate in Weekly Contest and Solve one Problem 
*/

//  Code 

/*
class Solution {
public:
    int countEven(int num) {
        vector<int> arr;
        int count =0;
        
        for(int i=2;i<=num;i++){
            arr.push_back(i);
        }
        for(int i=0;i<arr.size();i++){
            int rem = 0, sum =0;
            while(arr[i]){
                rem = arr[i]%10;
                arr[i] /= 10;
                sum += rem;
            }
            if(sum%2==0){
                count++;
            }
        }
        return count;
    }
};

*/

//                                      Disscussion SOlution 

//  Optimized than above --> Dissussion SOlution

/*
class Solution {
public:
    int countEven(int num) {
        int temp = num, sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum % 2 == 0 ? temp / 2 : (temp + 1) / 2 - 1;            // or we can use  (temp-1)/2 in place of (temp+1)/2-1;
    }
};

*/


// Time: O(NlgN)
// Space: O(1)


/*
class Solution {
public:
    int countEven(int num) {
        int ans = 0;
        for (int i = 1; i <= num; ++i) {
            int n = i, sum = 0;
            while (n) {
                sum += n % 10;
                n /= 10;
            }
            ans += sum % 2 == 0;
        }
        return ans;
    }
};

*/


// Using string


/*

class Solution {
public:
  int countEven(int num) {
    int digitSum = 0;
    string s = to_string(num);
    for(int i=0; i< s.size(); i++) {
      digitSum += s[i]-'0';
    }
    
    if(digitSum % 2 == 0)
      return num/2;
    else 
      return ((num+1)/2) - 1;                           // (nums-1)/2
  }
};

*/

