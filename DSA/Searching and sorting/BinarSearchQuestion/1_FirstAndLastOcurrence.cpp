/*
    in this logic we are using binary search approach
    TC will be    ----> O( log (n) )
*/
class Solution{
    public:
    int first(vector<int> &arr,int k){
        int s=0,e=arr.size()-1;
        int m=INT_MAX;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(arr[mid]==k && m>mid){
                m=mid;
                e=mid-1; // shifting end because need to find min index of the kth value
            }
            else if(arr[mid]<k){
                s=mid+1;
            }
            else {
                e=mid-1;
            }
        }
        if(m==INT_MAX){
            return -1;
        }else return m;
    }
    int second(vector<int> arr,int k){
        int s=0,e=arr.size()-1;
        int m=INT_MIN;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(arr[mid]==k && m<mid){
                m=mid;
                s=mid+1;
            }
            else if(arr[mid]<k){
                s=mid+1;
            }
            else {
                e=mid-1;
            }
        }
        if(m==INT_MIN){
            return -1;
        }else return m;
    }
    vector<int> searchRange(vector<int>& nums, int target){
        vector<int> v;
        v.push_back(first(nums,target));
        v.push_back(second(nums,target));
        return v;
    }
    
};

