//                                      Date:-6 Feb,2022




// brute force approach ---> 

/*
but not passed all test case  for big integer -
*/
// sloved 12/14 test cases😉

/*

class Solution {
public:
    long long int fact(int n){
        long long int  fact=1;
        for(int i=2;i<=n;i++)
            fact*=i;
        return fact;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> mat;
        for(int i=0;i<numRows;i++){
            vector<int>vec;
            int temp = i;
            for(int j=0;j<=i;j++)
                vec.push_back((fact(temp)/(fact(j)*fact(temp-j))));
             mat.push_back(vec);
        }
        return mat;
    }
};
*/
// Optimized solution

/*
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> mat;
        for(int i=0;i<numRows;i++){
            vector<int>vec(i+1,1);
            for(int j=1;j<i;j++)
                vec[j]= mat[i-1][j] + mat[i-1][j-1];
            mat.push_back(vec);
        }
        return mat;
    }
};

*/


// Another solution 

/*
class Solution {
public:
    vector<vector<int> > generate(int numRows) {
        vector<vector<int>> r(numRows);

        for (int i = 0; i < numRows; i++) {
            r[i].resize(i + 1);
            r[i][0] = r[i][i] = 1;
  
            for (int j = 1; j < i; j++)
                r[i][j] = r[i - 1][j - 1] + r[i - 1][j];
        }
        
        return r;
    }
};

*/


// USing map
// This time i'm not comfortable with advanced STL concept so when i comfort with stl i sovle this way

/*
class Solution{
public:
vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        
        vector<int> res;
        map<int, vector<int>> mp;
        
        for(int i = 0 ; i < matrix.size() ; i++) 
            for(int j = 0 ; j < matrix[0].size() ; j++)
                mp[i + j].push_back(matrix[i][j]);
        
        for(auto i : mp) {
            if((i.first)%2 == 0) 
                reverse(i.second.begin(), i.second.end()); 
            
            for(auto k : i.second) res.push_back(k);
        }
        return res;
    }
};

*/


/*
class solution{
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        if(matrix.empty()) return {};
        
        const int N = matrix.size();
        const int M = matrix[0].size();
        
        vector<int> res;
        for(int s = 0; s <= N + M - 2; ++s)
        {
            // for all i + j = s
            for(int x = 0; x <= s; ++x) 
            {
                int i = x;
                int j = s - i;
                if(s % 2 == 0) swap(i, j);

                if(i >= N || j >= M) continue;
                
                res.push_back(matrix[i][j]);
            }
        }
        
        return res;
    }
};
    */