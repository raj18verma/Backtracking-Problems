// Question Link:- https://leetcode.com/problems/letter-case-permutation/

class Solution {
public:

vector<string>ans;
    void help(string &s , int idx){
        
        ans.push_back(s);
        if(idx>=s.size()) return;
        for(int i=idx;i<s.size();i++){
           if(isalpha(s[i])){ // perform only on alphabets
           s[i]^=32;   // operation
            help(s,i+1) ; // recursion
            s[i]^=32;  // reverse the operation
        }       
    }
}
    vector<string> letterCasePermutation(string s) {
        help(s,0);
        return ans;
    }
};

// yt refer video:- https://youtu.be/mR-xG_3ZPmU?si=za-8Ppqw-XkZb_8R
