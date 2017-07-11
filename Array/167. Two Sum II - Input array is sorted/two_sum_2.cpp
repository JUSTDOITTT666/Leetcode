class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // lo points to the first, and hi points to the last
        int lo = 0, hi = numbers.size() - 1;
        
        while (numbers[lo] + numbers[hi] != target) {
            if (numbers[lo] + numbers[hi] < target) 
                lo++;
            else
                hi--;      
        }
        
        return vector<int>({lo + 1, hi + 1});
    }
};
