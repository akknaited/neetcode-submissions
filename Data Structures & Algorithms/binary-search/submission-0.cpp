class Solution {
public:
    int search(vector<int>& nums, int target)
    {
        int l = 0;
        int r = nums.size() - 1;
        while (l < r - 1)
        {
            int mid = (l + r) / 2;
            if (nums[mid] == target) return mid;
            else if (nums[mid] > target)
            {
                r = mid;
                continue;
            }
            else
            {
                l = mid;
                continue;
            }
        }
        if (nums[l] == target) return l;
        if (nums[r] == target) return r;
        return -1;
    }   
};
