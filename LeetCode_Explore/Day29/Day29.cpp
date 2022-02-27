//                                  Date: 25 feb, 2022


// 709. To Lower Case


/*

class Solution {
public:
    string toLowerCase(string s) {
        // using stl
        // transform(s.begin(),s.end(),s.begin(),::tolower);
        // return s;
        // logic
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i] >= 'A' && s[i] <= 'Z')
                s[i] = s[i] + 32;
        }
        return s;
    }
};


*/



// 