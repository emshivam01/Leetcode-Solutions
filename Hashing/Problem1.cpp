// Counting Frequencies of Array Elements
class Solution
{
public:
    vector<vector<int>> countFrequencies(vector<int> &nums)
    {
        vector<vector<int>> ans;
        unordered_map<int, int> freq;

        for (int x : nums)
        {
            freq[x]++;
        }
        for (auto &p : freq)
        {
            ans.push_back({p.first, p.second});
        }
        return ans;
    }
};