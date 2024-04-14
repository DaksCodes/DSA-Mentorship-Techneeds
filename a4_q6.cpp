class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
     set<vector<int>> st;
     for(int i=0;i<nums.size();i++)
     {
        for(int j=i+1;j<nums.size();j++)
        {
            for(int k=j+1; k<nums.size();k++)
            {
                if(nums[i]+nums[j]+nums[k]==0)
                {
                    vector<int>index={nums[i],nums[j],nums[k]};
                    sort(index.begin(), index.end());
                    st.insert(index);
                }
            }
        } 
     } 
     vector<vector<int>> output(st.begin(), st.end());
    return output; 
    }
};
