// August 22 2026

class Solution
{
public:
    bool checkDivisibility(int n)
    {
        int sum = 0;
        int product = 1;
        int lastDigit;
        int orginal_n = n;

        while (n > 0)
        {
            lastDigit = n % 10;
            n = n / 10;
            sum = sum + lastDigit;
            product = product * lastDigit;
        }
        if (orginal_n % (sum + product) == 0)
        {
            return true;
        }
        else
            return false;
    }
};