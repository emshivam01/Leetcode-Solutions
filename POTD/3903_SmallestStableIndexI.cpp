class Solution
{
public:
    int firstStableIndex(vector<int> &nums, int k)
    {
        vector<int> score(nums.size(), 0);
        int j = 0;
        while (j < nums.size())
        {
            int max = nums[0];
            int min = nums[j]; 

            // Finding max
            for (int i = 0; i <= j; i++)
            {
                if (nums[i] > max)
                {
                    max = nums[i];
                } 
            }

            // Finding min
            for (int i = j; i < nums.size(); i++)
            {
                if (nums[i] < min)
                {
                    min = nums[i];
                }
            }

            score[j] = max - min;

            if (score[j] <= k)
            {
                return j;
            }
            j++;
        }
        return -1;
    }
};