class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int expectedNums[nums.size()];
        int k=nums[0];
        expectedNums[0]=k;
        int next_index=1;
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i]==k)
            {
                continue;
            }
            else{
                expectedNums[next_index]=nums[i];
                next_index++;
                k=nums[i];
            }
        }
        for(int i=0; i<next_index;i++)
        {
            nums[i]=expectedNums[i];
        }
        return next_index;
    }
};
