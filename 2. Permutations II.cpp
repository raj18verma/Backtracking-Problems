// Question Link:- https://leetcode.com/problems/permutations-ii/submissions/1088275831/

class Solution {
public:
 vector<vector<int>>ans;
    
    void help(int st,int end,vector<int>nums){
        
        // base condition to stop recursion
        
        if(st==end){
            ans.push_back(nums);
            return;
        }
        
        for(int i=st;i<=end;i++){
            if(nums[i]==nums[st] && i!=st) continue;
            swap(nums[st],nums[i]);
            st++;
            help(st,end,nums);
            st--;  // backtrack
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int st=0,end=nums.size()-1;
        help(st,end,nums);
        return ans;
    }
};

// Best yt explanation: https://youtu.be/aWbxkR3i-qs?si=Cpcdf7VeiXCZoILL
