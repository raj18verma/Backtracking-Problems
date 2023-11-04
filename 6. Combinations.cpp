// Question Link:- https://leetcode.com/problems/combinations/description/

class Solution {
public:
    vector<vector<int>>ans;
    void help(int val,int k,int n,vector<int>&v){
        
        if(v.size()==k){         
            ans.push_back(v);
            return;
        }
        
        for(int i=val;i<=n;i++){  // traverse each element from [1,n];
             v.push_back(i);      // perform operation
             help(i+1,k,n,v);   // call recursion
             v.pop_back();         // reverse operation (do backtrack)
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>v;
        help(1,k,n,v);   
        return ans;
    }
};
