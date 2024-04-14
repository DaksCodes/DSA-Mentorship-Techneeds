class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        int insert=0;
        while(low<=high)
        {
            int mid=low+high;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]>target)
            {
                high=mid-1;
                if(high>0)
                {
                insert=high;
                }
                insert=0;
            }
            else{
                low=mid+1;
                insert=low;
            }
        }
        return insert;
    }
};
