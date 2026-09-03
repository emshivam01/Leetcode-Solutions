class Solution
{
public:
    int missingMultiple(vector<int> &nums, int k)
    {
        int smallest_k = k;
        while (true)
        {
            bool found = false;
            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] == smallest_k)
                {
                    found = true;
                }
            }
            if (!found) return smallest_k;
            smallest_k += k;
        }
    }
};