// Sum of First N Numbers //

int sumTillN(int i, int n)
{
    if (i > n)
    {
        return 0;
    }
    return i + sumTillN(i + 1, n);
}

class Solution
{
public:
    int NnumbersSum(int N)
    {
        return sumTillN(1, N);
    }
};
