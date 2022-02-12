//                                          Date :- 9 Feb,2022

//                                      2D array /Matrix problem C++

//                                          Problem ->Flipping an Image

// Brute force approach 

/*
class Solution {
public:
    void swap(int* a, int* b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int row = image.size();
        int col = image[0].size();
        for(int i=0;i<row;i++){
            int start = 0,end=col-1;
            while(start<end){
                swap(&image[i][start],&image[i][end]);
                start++;end--; 
            }
        }
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(image[i][j]==0){
                    image[i][j]=1;
                }
                else{
                    image[i][j]= 0;
                }
            }
        }
        return image;
    }
};

*/

// Another approach --> somewhat optimized 



/*
0x1 is just a hex value of 1.

*/
/*
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for (int i=0; i<A.size(); i++) {
            reverse(A[i].begin(), A[i].end());
            for (int j=0; j<A[i].size(); j++) {
                A[i][j] ^= 0x1;
            }
        }
        return A;
    }
};

*/


//                                  Problem --->  Matrix Diagonal Sum

// Brute force solution 


/*
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();
        int sum =0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(i==j){
                    sum += mat[i][j];
                }
                if(i+j==row-1){
                    sum+= mat[i][j];
                }
            }
        }
        if(row%2!=0){
            sum = sum -mat[row/2][col/2];
        }
        return sum;
    }
};



*/


// OR

/*
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        
        int n=mat.size(),ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j || i+j==n-1)
                    ans+=mat[i][j];
            }
        } 
        return ans;
    }
};
*/

// Optimized Approach --> O(N)


/*
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size(),ans=0;
        for(int i=0;i<n;i++){
            if(i!=n-i-1) 
                ans+=mat[i][i]+mat[i][n-i-1];
            else 
                ans+=mat[i][i];   
        }
        return ans;
    }
};

*/



//  Unable to understand this one 

/*



int diagonalSum(vector<vector<int>>& m, int i = -1) {
    return accumulate(begin(m), end(m), 0, [&](int s, vector<int> &v){
       return s + v[++i] + (i == v.size() - i - 1 ? 0 : v[v.size() - i - 1]);
    });
}

*/


//  Optimized Approach 
/*
class Solution 
{
public:
    int diagonalSum(vector<vector<int>>& mat)
    {
        int x = 0, y = 0, n = mat.size();
        for(int i = 0 ; i < n ; ++i )
        {
            x += mat[i][i];//Primary
            y += mat[i][n - i - 1];//Secondary
        }
        if(n%2==0)
            return x+y;
        return x+y-mat[n/2][n/2];//Removes the central element as we have added it twice
    }
};

*/


//                      Problem -> Count Negative Numbers in a Sorted Matrix

// Brute Force approach
/*

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int row = grid.size(),count=0;
        for(auto it: grid){
            for(auto itr: it){
                if(itr<0){
                    count++;
                }
            }
        }
        return count;
    }
};

*/


//  One optimization 

/*
int countNegatives(vector<vector<int>>& grid, int res = 0) {
    for (int i = grid.size() - 1; i >= 0 && grid[i].back() < 0; --i)
        for (int j = grid[i].size() - 1; j >= 0 && grid[i][j] < 0; --j)
            ++res;
    return res;
}

*/

// Come to this portion when solve easy problem of Binary Search


//  Using Binary Search

/*
class Solution {
public:
    static int countNegativesHelper(const vector<int>& vec) {
        int low = 0;
        int high = vec.size() - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (vec[mid] >= 0) {
                // discard everything before mid which is non-negative
                low = mid + 1;
            } else {
                // discard everything after high which is negative
                high = mid - 1;
            }
        }
        // high is the index for the last non-negative number
        // high + 1 is the number of non-negative numbers
        // size - (high + 1) is the number of negative numbers
        return vec.size() - high - 1;
    }

    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        for (int i=0; i<grid.size(); i++) {
            count += countNegativesHelper(grid[i]);
        }
        return count;
    }
};

*/


// Binary search

/*

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        
        int i=m-1;
        int j=0;
		// to start from the grid[m-1][0] position
        int count=0;
        
        while(i>=0 && i<m && j>=0 && j<n){
            if(grid[i][j] < 0){
                count = count + (n-j); //when the first occurrence of a number in a row is -ve, all following numbers will be -ve. So, add their count.
                i=i-1; //then move to the above row
            }
            else{
                j=j+1; //else move to the right (i.e. to the next column)
            }
                
        }       
        
        return count;
    }
};

*/