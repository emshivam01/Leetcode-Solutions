// Print 1 to N using Recursion

void printTillN(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << i << endl;
    printTillN(i + 1, n);
}

class Solution
{
public:
    void printNumbers(int n)
    {
        printTillN(1, n);
    }
};
