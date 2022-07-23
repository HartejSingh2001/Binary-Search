// Best method
    for(i=low;i<=high;i++)
    {
        mid=(low+high)/2;
        if(arr[mid]<key)
        {
            low=mid+1;
        }
        else if(arr[mid]>key)
        {
            high=mid-1;
        }
        else if(arr[mid]==key)
        {
            cout<<"Element found ::";
            flag=1;
            break;
        }
    }
// end

// Method 2
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
