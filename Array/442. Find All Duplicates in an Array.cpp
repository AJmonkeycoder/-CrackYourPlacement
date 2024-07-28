class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;

        // 1<=nums[i]<=n -> element will not cross the size of vector
        // we mark element at the index = (visted element -1 ) negatice means we
        // have seen this element before

        for (int i = 0; i < nums.size(); i++) {
            int num = abs(nums[i]);
            if(nums[num-1] <0){
                ans.push_back(num);
            }
            nums[num - 1] *= -1;
            //cout<<nums[i]<<", ";
            
        }

        return ans;
    }
};