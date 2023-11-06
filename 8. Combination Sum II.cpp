// Question Link:- https://leetcode.com/problems/combination-sum-ii/

class Solution {
public:

      void help(vector<vector<int>>&ans,vector<int>&temp,vector<int>&candidates,int sum, int target,int idx){
        if(sum>target) return;
        
         else if(sum==target){
           
            ans.emplace_back(temp);
            return ;
        }
       
            for(int i=idx;i<candidates.size();i++){
                
      if(i>idx and candidates[i]==candidates[i-1]) continue;
                  
            sum+=candidates[i];              // perform operation
            temp.push_back(candidates[i]);
           
           help(ans,temp,candidates,sum,target,i+1);  // call recursion on same index (limited times we can use a element)
            
            sum-=candidates[i];     // reverse operation (backtrack)
            temp.pop_back();
            }
        }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>temp;
        help(ans,temp,candidates,0,target,0);
        return ans;
    }
};

// yt refer video:- https://youtu.be/sWgWciaTb_g?si=c4oRC85RPYCx0dNz
