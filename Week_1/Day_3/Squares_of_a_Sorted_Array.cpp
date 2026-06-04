class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n,0);
        int i = 0, j=n-1;
        int idx = n-1;
        while(i<=j){
            int p = nums[i]*nums[i];
            int q = nums[j]*nums[j];
            if(p>=q){
                v[idx] = p;
                idx--;
                i++;
            }
            else{
                v[idx] = q;
                idx--;
                j--;
            }
        }
        return v;
    }
};
