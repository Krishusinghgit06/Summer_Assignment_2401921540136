class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i =1;
        int k=1;
        while(i<n){
            if(nums[i-1]<nums[i]){
                nums[k] =nums[i];
                k++;
            }
            i++;
        
        }
        return k;
    }
};
