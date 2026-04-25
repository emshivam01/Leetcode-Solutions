#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int writeIndex=0;

        for(int i=1; i<nums.size(); i++){
            if(nums[i-1]==nums[i]){
                continue;
            }
            else {
                writeIndex++;
                nums[writeIndex]=nums[i];
            }
        }
        return writeIndex+1;
    }
};

// Checking if previous element is same as current element, if yes then we skip it and if not then we write the current element at the writeIndex and increment the writeIndex. Finally we return writeIndex+1 as the length of the array without duplicates.