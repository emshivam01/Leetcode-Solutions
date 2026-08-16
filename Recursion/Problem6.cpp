// Reverse an array

void reverseHelper(int arr[], int i, int j)
{
    if (i >= j)
    {
        return;
    }

    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;

    reverseHelper(arr, i + 1, j - 1);
}

class Solution
{
public:
    void reverse(int arr[], int n)
    {
        int i = 0;
        int j = n - 1;

        reverseHelper(arr, i, j);
    }
};
