class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int carry = 1;
        vector<int> ans;
        
        // Traverse from right to left (least significant to most significant digit)
        for (int i = n - 1; i >= 0; i--) {
            int sum = digits[i] + carry;
            ans.push_back(sum % 10); // Store the last digit of the sum
            carry = sum / 10;        // Update the carry for the next iteration
        }
        
        // If a carry still remains (e.g., input was [9, 9, 9]), push it
        if (carry == 1) {
            ans.push_back(1);
        }
        
        // Since we pushed digits from right to left, reverse the vector
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};