// // 3550. Smallest Index With Digit Sum Equal to Index

for (int i = 0; i < nums.size(); i++)
{
    int sum = 0;
    while (nums[i] > 0)
    {
        sum += nums[i] % 10;
        nums[i] /= 10;
    }
    if (i == sum) return i;
}
return -1;