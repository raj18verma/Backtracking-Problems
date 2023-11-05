// Question Link:- https://leetcode.com/problems/combination-sum/description/

class Solution {
public:

    void help(vector<vector<int>>&ans,vector<int>&temp,vector<int>&candidates,int sum, int target,int idx){
        
        if(sum>target) return ;  // base case
        
        if(sum==target){           // store the answer and return
            ans.push_back(temp);
            return;
        }
            
        for(int i=idx;i<candidates.size();i++){         
            
            sum+=candidates[i];              // perform operation
            temp.push_back(candidates[i]);
            
            help(ans,temp,candidates,sum,target,i);  // call recursion on same index (unlimited times we can use a element)
            
            sum-=candidates[i];     // reverse operation (backtrack)
            temp.pop_back();
        }    
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>temp; 
        // sort(candidates.begin(),candidates.end());     // you can sort ,will increase code efficiency
        help(ans,temp,candidates,0,target,0);
        return ans;   
    }
};
