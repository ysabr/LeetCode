#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for (vector<int>::iterator it = nums.begin(); it != nums.end(); it++)
        {
            if (*it != val)
            {
                nums[k] = *it;
                k++;
            }
        }
        return k;
    }
};