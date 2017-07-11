class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        // use hash table 
        unordered_map<int, int> hash;
        vector<int> result;
        
        for (int i = 0; i < nums.size(); i++) {
            int number_to_find = target - nums[i];
            
            // if found, add to result
            if (hash.find(number_to_find) != hash.end()) {
                
                // if found , i must be the number in the back, so we should return the index of the number found first.(Numbers in the back add to the map later)
                result.push_back(hash[number_to_find]);
                result.push_back(i);
                return result;
            }
            
            // if not found, add to hash table
            hash[nums[i]] = i;
        }
        
        return result;
    }
};
