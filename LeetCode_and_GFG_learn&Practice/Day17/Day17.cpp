//                                      Date:- 12 Feb,2022


//                                  The K weakest row in a Matrix


/*
class Solution {
public:
    // vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
    //     vector<int> arr;
    //     for(int i=0;i<mat.size();i++){
    //         int count = 0;
    //         for(int j=0;j<mat[0].size();j++){
    //             if(mat[i][j]==1){
    //                 count++;
    //             }
    //         }
    //         arr.push_back(count);
    //     }
    //     vector<int> ans;
    //     for(int i=0;i<arr.size();i++){
    //         // auto idx = *max_element((arr.begin(),arr.end())-arr.begin());
    //         int idx = min_element(arr.begin()+i,arr.end()) - arr.begin();
    //         ans.push_back(idx);
    //         // arr.erase(idx);    
    //     }
    //     vector<int> res;
    //     for(int i=k;i<ans.size();i++)
    //         res.push_back(arr[i]);
    //     return ans;
    // }
     vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n=mat[0].size();
        for(int i=0; i<mat.size(); i++){
            mat[i].push_back(i);
        }
        sort(mat.begin(), mat.end());
        vector<int> ans(k);
        for(int i=0; i<k; i++){
            ans[i]=mat[i][n];            
        }
        return ans;
    }
};

*/



// or



/*
class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> res;
        
        vector<pair<int,int>> vp;
        
        for(int i=0;i<mat.size();i++){
            int count = 0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j] == 1)
                    ++count;
                        
            }
            vp.push_back(make_pair(count,i));
        }
        sort(vp.begin(),vp.end());
         for(int i=0;i<k;i++){
              res.push_back(vp[i].second);  
         }
        
        return res;
        
    }
};

*/