#include <vector>

class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int l = -1, r = nums.size();
        int min = __INT_MAX__;
        while (r - l > 1)
        {
            int m = (l + r) / 2;
            if (m != -1 || m != nums.size())
            {
                if (nums[m] > nums[m + 1])
                {
                    l = m;
                }
                else
                {
                    r = m;
                    min = nums[m];
                }
            }
        }
        return min;
    }
};