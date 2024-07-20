class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int> umap;
        for(int i=0; i<n; i++){
            umap[nums[i]] = i;
           
        }
        for(int i=0;i<n; i++){
            int compliment = target- nums[i];
            if(umap.count(compliment) && umap[compliment]!=i){
                return {i, umap[compliment]};
            }
        }

        return {};
    }
};