//                              Date:- 17 Feb ,2022

// Problem:- 1260. Shift 2D Grid


// code

/*

class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size(),n = grid[0].size();
        vector<vector<int>> temp;
        temp = grid;
        while(k--){
            for(int i=0;i<m;i++){
                for(int j=1;j<n;j++){
                    temp[i][j] = grid[i][j-1];
                }
            }
            for(int i=0;i<m-1;i++){
                temp[i+1][0] = grid[i][n-1];
            }
            temp[0][0] = grid[m-1][n-1];
            grid=temp;
        }
        return grid;
    }
};

*/



// Optimized code


/*

auto speedup=[]()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& G, int k) 
    {
        int m= G.size();
        int n= G[0].size();
        
        deque <int> tmp {};

        for(auto i=0; i<m; i++)
	        for(auto j=0; j<n; j++)
                tmp.push_back(G[i][j]);
    
        while(k--)
	    {
            int b= tmp.back();
            tmp.pop_back();
            tmp.push_front(b);
        }

        for(auto i=0; i<m; i++)
        {
	        for(auto j=0; j<n; j++)
	        { 
                G[i][j]= tmp.front();
                tmp.pop_front();
	        }
        }
        return G;
    }
};

*/



// Optimized code

/*
vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> res (m, vector<int> (n, 0));
        for (int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                int newCol = (j+k)%n;
                int countWrapArounds = (j+k)/n;
                int newRow = (i+countWrapArounds)%m;
                res[newRow][newCol] = grid[i][j];
            }
        }
        return res;
    }

*/


// More Optimized code


/*



class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        const int m = grid.size();
        const int n = grid[0].size();
        vector<vector<int>> ans(m, vector<int>(n, 0));
        for (int i = 0; i < m * n; ++i) {
            int ori_y = i / n;
            int ori_x = i % n;
            int new_y = (ori_y + (ori_x + k) / n) % m;
            int new_x = (ori_x + k) % n;
            
            ans[new_y][new_x] = grid[ori_y][ori_x];
        }
        return ans;
    }
};


*/