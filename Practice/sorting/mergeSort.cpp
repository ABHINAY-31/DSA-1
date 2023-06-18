class Solution {
public:
    void merge(vector<int> &nums, int l ,int mid, int r){
        int n1 = mid - l +1;
        int n2 = r-mid;
        int arr1[n1];
        int arr2[n2];
        int k = l;
        for(int i = 0 ; i <n1 ; i++){
            arr1[i] = nums[k++];
        }
        k = mid+1;
        for(int i = 0 ;i < n2 ;i++){
            arr2[i] = nums[k++];
        }
        int i = 0 , j = 0;
        int index = l;
        while(i < n1 && j < n2){
            if(arr1[i] < arr2[j]){
                nums[index++] = arr1[i++];
            }
            else{
                nums[index++] = arr2[j++];
            }
        }
        while(i < n1){
            nums[index++]  = arr1[i++];
        }
        while(j < n2){
            nums[index++] = arr2[j++];
        }

    }
    void mergeSort(vector<int> &nums , int l , int r){
        if(l>=r){
            return ;
        }
        int mid = (l + r) / 2;
        mergeSort(nums , l ,mid);
        mergeSort(nums, mid+1 , r);
        merge(nums, l , mid , r);
    }
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums , 0 , nums.size()-1);
        return nums;
    }
};