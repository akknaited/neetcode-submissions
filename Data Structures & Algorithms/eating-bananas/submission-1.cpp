class Solution 
{
public:
    int minEatingSpeed(vector<int>& piles, int h) 
    {
        int l = 1;
        int r = piles[0];
        for (int i = 0; i < piles.size(); i++)
        {
            if (piles[i] > r)
            {
                r = piles[i];
            }
        }
        while (l < r)
        {
            int mid = (l + r) / 2;
            int h1 = 0;
            for (int i = 0; i < piles.size(); i++)
            {
                h1 += (piles[i] + mid - 1) / mid;
            }
            if (h1 <= h) r = mid;
            else l = mid + 1;
        }
        return l;
    }
};
