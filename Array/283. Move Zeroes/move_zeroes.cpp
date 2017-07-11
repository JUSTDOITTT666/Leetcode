List List class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // i, j are just like two pointers. i points to the element behind 0. j points 0.
        for (int i = 0, j = 0; i < nums.size(); i++)
            if (nums[i] != 0)
                swap(nums[i], nums[j++]);
    }
};
