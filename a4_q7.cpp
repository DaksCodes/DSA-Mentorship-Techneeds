class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> st;
     for(int i=0;i<nums.size();i++)
     {
        for(int j=i+1;j<nums.size();j++)
        {
            for(int k=j+1; k<nums.size();k++)
            {
                for(int l=k+1; l<nums.size();l++)
                {
                if(nums[i]+nums[j]+nums[k]+nums[l]==target)
                {
                    vector<int>index={nums[i],nums[j],nums[k],nums[l]};
                    sort(index.begin(), index.end());
                    st.insert(index);
                }
                }
            }
        } 
     } 
     vector<vector<int>> output(st.begin(), st.end());
    return output;
    }
};
