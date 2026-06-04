class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        int i =1;
        int dup = nums[0];
        while(i<n){
            if(dup==nums[i]){
                return true;
            }
            else dup = nums[i];
            i++;
        }
        return false;
    }
};
