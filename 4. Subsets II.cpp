// Question Link:- https://leetcode.com/problems/subsets-ii/description/

class Solution {
public:

vector<vector<int>>ans;
vector<int>temp;

    void help(vector<int>&nums,int idx){
        ans.push_back(temp);
        
        for(int i=idx;i<nums.size();i++){
            if(i>idx && nums[i]==nums[i-1]) continue;
            temp.push_back(nums[i]);  
            help(nums,i+1); 
            temp.pop_back();       
        }
        
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        help(nums,0);
        return ans;   
    }
};

// YT refer video:- https://youtu.be/axr8COXsKtg?si=2UJPgZ7Z3JqGN9A1
