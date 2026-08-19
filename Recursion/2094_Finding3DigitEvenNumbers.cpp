class Solution
{
public:
    vector<int> findEvenNumbers(vector<int> &digits)
    {
        int num = 0;
        unordered_set<int> arr;
        for (int i = 0; i < digits.size(); i++)
        {
            if (digits[i] == 0)
                continue;
            for (int j = 0; j < digits.size(); j++)
            {
                if (i == j)
                    continue;
                for (int k = 0; k < digits.size(); k++)
                {
                    if (i == k || j == k)
                        continue;
                    num = 100 * digits[i] + 10 * digits[j] + digits[k];
                    if (num % 2 == 0)
                    {
                        arr.insert(num);
                    }
                }
            }
        }
        vector<int> v(arr.begin(), arr.end());
        sort(v.begin(), v.end());
        return v;
    }
};