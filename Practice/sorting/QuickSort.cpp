class Solution {
public:
    int partition(vector<int> &nums , int l , int r){
        int pivot = nums[l];
        int cnt = 0;
        for(int i = l+1 ;i <= r; i++){
            if(nums[i] <= pivot){
                cnt++;
            }
        }
        int pivotIndex = l + cnt;
        swap(nums[pivotIndex] , nums[l]);
        int i = l , j = r;
        while(i < pivotIndex && j > pivotIndex){
            while(nums[i] < pivot){
                i++;
            }
            while(nums[j] > pivot){
                j--;
            }
            if(i < pivotIndex && j > pivotIndex){
                swap(nums[i++] , nums[j--]);
            }
        }
        return pivotIndex;
    }
    void quickSort(vector<int> &nums, int l ,int r){
        if(l>=r){
            return ;
        }
        int p = partition(nums , l , r);
        quickSort(nums , l , p-1);
        quickSort(nums , p+1 , r);
    }
    vector<int> sortArray(vector<int>& nums) {
        quickSort(nums , 0, nums.size()-1);
        return nums;
    }
};