class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int N=nums.size();
        vector<bool> present(N+2,false);
        for (int v:nums){
            if(v<=0||v>N)continue;
            present[v]=true;
        }
        for(int v=1;v<=N+1;v++){
            if(!present[v]) return v;
        }
        return 0;
        
    }
};
