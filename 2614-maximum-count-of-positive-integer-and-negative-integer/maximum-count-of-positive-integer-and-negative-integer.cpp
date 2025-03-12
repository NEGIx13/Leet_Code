class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pve = 0;
        int nve = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] > 0){
                pve++;
            }
            else if(nums[i] < 0){
                nve++;
            }
            else{
                continue;
            }
        }
        if(pve >= nve){
            return pve;
        }
        else{
            return nve;
        }
    }
};