class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> aux;
        int longest = 0; 
        for(int n :nums){
            aux.insert(n);
        }
        for(int i = 0;i < nums.size();i++){
            int n = nums[i];
            if(!aux.count(n - 1)){
                int currLongest = 1;
                while(aux.count(n + 1)){
                    currLongest++;
                    n++;
                }  
                if(currLongest > longest){
                    longest = currLongest;
                }
            }
        }

        return longest;
        
    }
};
