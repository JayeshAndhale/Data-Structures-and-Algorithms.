class Solution {
public:
    bool check(vector<int>& nums) {
        
        int count = 0;
        for (int i=1; i<=nums.size(); i++){
           if( nums[i-1] > nums[i%nums.size()] ) count++;
        }

        return (count <= 1) ;
    }
};
