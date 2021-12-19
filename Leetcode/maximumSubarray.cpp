// kadane Algorithm O(n)
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int n = nums.size();
        int currentsum = 0;
        int largest = 0;
        int check = 1;
        for (auto x : nums)
        {
            if (x > 0)
            {
                check = 0;
            }
        }
        if (check == 0)
        {
            for (int i = 0; i < nums.size(); i++)
            {
                currentsum = currentsum + nums[i];
                if (currentsum < 0)
                {
                    currentsum = 0;
                }
                largest = max(largest, currentsum);
            }
            return largest;
        }
        else
        {
            largest = nums[0];
            for (auto x : nums)
            {
                largest = max(largest, x);
            }
            return largest;
        }
    }
};