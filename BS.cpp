class Solution{
public:
    int binarysearch(int arr[], int n, int k){
        int low=0,high=n-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(arr[mid]==k)
            {
                return mid;
            }
            if(k>arr[mid])
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        return -1;
    }
};