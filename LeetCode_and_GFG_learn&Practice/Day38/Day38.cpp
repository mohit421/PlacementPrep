//                                  Date:- 8 march, 2022


/*'

Today i am giving weekly contest and unable to solve any one of the question
cuz i start with medium question i.e., question number 2 --> that's the thoughest one according to all

and I stuck in this for an hour and atlast i got TLE 
Out of 87 test cases only 32 test cases are passed because i mistake in reading question 
After contest end i realize it .

What i have not done in next contest:-
1- Do sequentially question asked from easy to medium then hard so do easy 1st then medium atlast attemp 
hard one.

2- be patient and do hard work 
3- Revise all what i have done before .

*/


// Problem 1:-2194. Cells in a Range on an Excel Sheet

//                                      Discussion solution
// I reached to somewhat to the solution but unable to solve i learn from discuss 


/*

class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string>vec;
        for(char ch=s[0];ch<=s[3];ch++){
            for(char chr = s[1];chr<=s[4];chr++){
                string temp ;
                temp += ch;
                temp += chr;
                vec.push_back(temp);
            }
        }
        return vec;
    }
};

*/



// Another one

/*

vector<string> cellsInRange(string s) {
    vector<string> res;
    for (char c = s[0]; c <= s[3]; ++c)
        for (char r = s[1]; r <= s[4]; ++r)
            res.push_back({c, r});
    return res;
}

*/

// Another way similar to above
/*

vector<string> cellsInRange(string s) {
    vector<string> res;
    for (char c = s[0]; c <= s[3]; ++c)
        for (char r = s[1]; r <= s[4]; ++r)
            res.push_back(string(1,ch)+chr);
    return res;
}
*/





// Another solution

// Simulation

// Alogorithm:
// We have to iterate from col1 to col2 letters and for every letter we just have to traverse from row1 to row2 number.
// In this way we will get our answer in sorted order automatically.
/*

vector<string> cellsInRange(string s){
    //result answer
    vector<string> res;
    
    //extract columns and rows
    int col1= s[0]-'A' , col2= s[3]-'A';
    int row1= s[1]-'0' , row2= s[4]-'0';
    
    //keep incrementing the character from c1->c2
    for(;col1<=col2;col1++){
       char letter= col1+'A'; 
       //for every charcter traverse from r1->r2 
       for(int i=row1;i<=row2;i++){
           string p="";
           char r= i+'0';     //get corresponding column in terms of character
           p+=letter;         //append current column-> letter
           p+=r;              //append current row
           res.push_back(p);  //put string in res vector
       } 
    }
    return res;
}


*/


// Learn simulation
