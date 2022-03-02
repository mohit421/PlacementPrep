//                                      Date:- 15 feb,2022

// Problem:-  766. Toeplitz Matrix

/*
class Solution {
public:
    bool check(vector<vector<int>>mat,int i,int j){
        int res = mat[i][j];
        while(++i<mat.size() & ++j<mat[0].size()){
            if(mat[i][j]!=res){
                return false;
            }
        }
        return true;
    }
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        for(int j=0; j<matrix[0].size();j++){
            if(!check(matrix,0,j))
                return false;
        }
        for(int j=1; j<matrix.size();j++){
            if(!check(matrix,j,0))
                return false;
        }
        return true;
    }
};

*/



// Another approach

/*
class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        for(int i=0;i<n-1;i++){
            for(int j=0;j<m-1;j++){
                if(matrix[i][j]!=matrix[i+1][j+1])
                    return false;
            }
        }
        return true;
    }
};

*/




// Problem:- Transpose of a Matrix


/*

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m = matrix.size(),n=matrix[0].size();
        vector<vector<int>> ans(n,vector<int>(m));
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                ans[i][j] = matrix[j][i];
        return ans;
    }
};

*/