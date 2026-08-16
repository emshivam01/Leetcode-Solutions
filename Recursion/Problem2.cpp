void printFromN(int n, int i)
{
    if (n < i)
    {
        return;
    }
    cout << n << endl;
    printFromN(n - 1, i);
}

class Solution
{
public:
    void printNumbers(int n)
    {
        // Your code goes here
        printFromN(n, 1);
    }
};