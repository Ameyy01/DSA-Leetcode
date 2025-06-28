// LeetCode 2149: Rearrange Array Elements by Sign (Give equal no. of +ve and -ve elements)
// Solved on: 28 June 2025
// Time: O(n), Space: O(n)

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,0);
        int posIndex = 0, negIndex = 1;
        for(int i=0; i<n; i++){
            if(nums[i]<0){
            ans[negIndex]=nums[i];
            negIndex +=2;
            }
            else{
                ans[posIndex]=nums[i];
                posIndex +=2;
            }
        }
        return ans;

    }
};