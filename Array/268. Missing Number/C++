/**
 * using XOR 
 * X1 = A1 ^ A2
 * X2 = A1 ^ A2 ^ A3
 * X1 ^ X2 = (A1 ^ A1) ^ (A2 ^ A2) ^ A3 = A3
 * 
 * XOR Properties 
 * Commutative property  a ^ b = b ^ b
 * associative laws   (a ^ b) ^ c = a ^ (b ^ c)
 */

class Solution {
public:
    /**    
     * @param nums: a vector of integers
     * @return: an integer
     */
    int findMissing(vector<int> &nums) {
        // write your code here
        int x1 = 0;
        int x2 = 0;
        
        for (int i = 0; i <= nums.size(); i++)
            x1 ^= i;
        
        for (int num:nums ) 
            x2 ^= num;
      
        return (x1 ^ x2);
    }
};


/**
 * Get the sum of numbers 
 *
 */
class Solution {
public:
    /**    
     * @param nums: a vector of integers
     * @return: an integer
     */
    int findMissing(vector<int> &nums) {
        int sum = 0;
        int n = nums.size();
        
        for (int num : nums) 
            sum += num;
        
        return ((n + 1) * n / 2 - sum);
    }
};
