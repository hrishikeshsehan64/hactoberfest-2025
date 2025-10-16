class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int k=0;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if (nums[i]==1) k++;
            else{
                k=0;
            }
            ans = max(ans,k);
        }
        return ans;
    }
};
