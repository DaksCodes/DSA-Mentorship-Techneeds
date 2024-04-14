class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        int size= piles.size();
        int maxk=piles[size-1];
        int finalk=piles[size-1];
        int i=0;
        int hours=0;
        while(i<size)
        {
            if(piles[i]<=maxk)
            {
                hours++;
                i++;
            }
            else
            {
                if(piles[i]%maxk!=0)
                {
                    hours=hours+ (piles[i]/maxk)+1;
                    i++;
                    //continue;
                }
                else
                {
                    hours=hours+(piles[i]/maxk);
                    i++;
                    //continue;
                }
            }
            if(maxk<=finalk && hours<=h && i==size)
            {
                finalk=maxk;
                maxk--;
                i=0;
                hours=0;
            }
        }
        return finalk;
    }
};
