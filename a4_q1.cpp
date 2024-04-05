class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    int n=nums.size();
    vector<int>rotated(n);
    if(k>n)
    {
        k=k%n;
    }
    int j=0;
    for(int i=n-k; i<n; i++)
    {
        rotated[j]=nums[i];
        j++;
    }
    for(int i=0; i<n-k;i++)
    {
        rotated[j]=nums[i];
        j++;
    }
    for(int i=0;i<n; i++)
    {
        nums[i]=rotated[i];
    }
    }
};
