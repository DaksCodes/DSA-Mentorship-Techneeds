class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
      int maxsum=INT_MIN;
      for(int i=0; i<nums.size();i++)
      {
        int sum=0;
        for(int j=i; j<nums.size();j++)
        {
            sum=sum+nums[j];
            if(sum>maxsum)
            {
                maxsum=sum;
            }
        }
      }
      return maxsum;  
    }
};
