//                                              Date:- 14 Feb, 2022


// Problem:-            566.Reshape the matrix

// Code


/*
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int row = mat.size();
        int col = mat[0].size();
        vector<int>arr;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                arr.push_back(mat[i][j]);
            }
        }
        vector<vector<int>>res(r,vector<int>(c));
        int count=0;
        if(r*c!=row*col)
            return mat;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                res[i][j] = arr[count++];
            }
        }
        return res;
    }
};
*/


//  More optimized solution

// Row First approach
// TC--> O(r*c) 

/*
class Solution{
    public:
        vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c){
            int m = size(mat),n = size(mat[0]),total = m*n;
            if(r*c != total)
                return mat;
            vector<vector<int>> ans(r,vector<int>(c));
            for(int i=0;i<total;i++)
                ans[i/c][i%c] = mat[i/n][i%n];
            return ans;
        }
};

*/


// Column first Approach


/*
class Solution{
    public:
        vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c){
            int m = size(mat),n = size(mat[0]),total = m*n;
            if(r*c != total)
                return mat;
            vector<vector<int>> ans(r,vector<int>(c));
            for(int col=0; col<n; col++)
                for(int row=0;row<m;row++){
                    int new_row = (n*row+col)/c;
                    int new_col = (n*row+col)%c;
                    ans[new_row][new_col] = mat[row][col];
                }
            return ans;
        }
};

*/


// Optimized Solution       O(r*c)

/*
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = size(mat), n = size(mat[0]), total = m * n;
        if(r * c != total) return mat;   
        vector<vector<int>> ans(r, vector<int>(c));
        for(int i = 0; i < total; i++) 
            ans[(i%m * n + i/m) / c][(i%m * n + i/m) % c] = mat[i % m][i / m];
        return ans;
    }
};

*/









// Problem:- Convert 1D into 2D array



// Brute Force Approach

/*
class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int lenArr = original.size();
        vector<vector<int>>ans(m,vector<int>(n));
        if(lenArr==m*n){
            int count =0;
            for(int i=0;i<m;i++)
                for(int j=0;j<n;j++)
                    ans[i][j]= original[count++];
        }
        else{
            return {};
        }
        return ans;
    }
};

*/

// Using one for loop but --> brute force approach

/*
class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int lenArr = original.size();
        int total = m*n;
        vector<vector<int>>ans(m,vector<int>(n));
        if(lenArr==m*n){
            int count =0;
            for(int i=0;i<total;i++)
                ans[i/n][i%n]=original[count++];
        }
        else{
            return {};
        }
        return ans;
    }
};

*/



//  USing STL

/*

class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
    vector<vector<int>> res;
    if (m * n == original.size())
        for (auto i : original) {
            if (res.empty() || res.back().size() == n)
                res.push_back({});
            res.back().push_back(i);
        }
    return res;
    }
};

*/


/*

class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if (m * n != original.size()) 
            return {};
        vector<vector<int>> res;
        for (int i = 0; i < m*n;) {
            vector<int> tmp;
            for (int j = 0; j < n; j++) 
                tmp.push_back(original[i++]);
            res.push_back(tmp);
        }
        return res;
    }
};

*/