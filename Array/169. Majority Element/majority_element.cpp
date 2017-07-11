class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map<int, int> hash;        
        int n = nums.size() / 2;
        
        for (int num : nums) 
            if (++hash[num] > n)
                return num; 
    }
};
