class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>indices;
        if(nums.size()==0)
        {
            indices.push_back(-1);
            indices.push_back(-1);
            return indices;
        }
        if(nums.size()==1)
        {
            if(nums[0]==target)
            {
                indices.push_back(0);
                indices.push_back(0);
                return indices;
            }
            else{
                indices.push_back(-1);
                indices.push_back(-1);
                return indices;
            }
        }
        int low=0;
        int high=nums.size()-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]==target)
            {
                indices.push_back(mid);
                if(nums[mid-1]==target && (mid)>0)
                {
                    indices.push_back(mid-1);
                }
                if(nums[mid+1]==target && (mid)<nums.size()-1)
                {
                    indices.push_back(mid+1);
                }
                sort(indices.begin(), indices.end());
                return indices;
            }
            else if(nums[mid]>target)
            {
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        indices.push_back(-1);
        indices.push_back(-1);
        return indices;
    }
};
