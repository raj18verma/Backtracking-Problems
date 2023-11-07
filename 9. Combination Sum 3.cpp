// Question Link: https://leetcode.com/problems/combination-sum-iii/description/

class Solution {
public:

      void help(vector<vector<int>>&ans,int idx,vector<int>&temp,int size, int target, int sum){
        if(sum>target) return;

        if(temp.size()==size && sum==target){
            ans.push_back(temp);
            return;
        }
       
        for(int i=idx;i<=9;i++){
            sum+=i;
            temp.push_back(i);

            help(ans,i+1,temp,size,target,sum);
            sum-=i;
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>temp;
        help(ans,1,temp,k,n,0);
        return ans;
    }
};


// yt refer video:- https://youtu.be/4aSIJUed6d0?si=tPwg39gt3fYdwklN

