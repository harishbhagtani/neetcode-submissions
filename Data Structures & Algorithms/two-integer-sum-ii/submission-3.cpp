class Solution {
public:

    int binarySearch(vector<int> arr, int start, int find){
         int left = start;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == find)
            return mid;

        if (arr[mid] < find)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
    }

    vector<int> twoSum(vector<int>& numbers, int target) {
        //We can use binary search to search the element
        vector<int> ans;

        for(int i = 0;i < numbers.size();i++){
            int num = numbers[i];
            int find = target - num;
            int found = binarySearch(numbers, i + 1 , find); //i + 1 is start
            if(found > -1){
                ans.push_back(i + 1);
                ans.push_back(found + 1);
                return ans;
            }
        }
    }

    
};
