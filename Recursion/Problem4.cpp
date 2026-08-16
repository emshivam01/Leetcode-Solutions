// Factorial of a given number //

int factOfN(int i, int n)
{
    if (i > n)
    {
        return 1;
    }
    return i * factOfN(i + 1, n);
}

class Solution
{
public:
    int factorial(int n)
    {
        return factOfN(1, n);
    }
};
