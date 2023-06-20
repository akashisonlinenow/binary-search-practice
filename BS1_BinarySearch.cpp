int bs(int low, int high, vector<int> &nums, int target)
{ // recurssive binary search
    if (low > high)
        return -1;

    int mid = (low + high) / 2;
    if (nums[mid] == target)
        return mid;
    else if (nums[mid] < target)
        bs(mid + 1, high, nums, target);
    else
        bs(low, mid - 1, nums, target);
}

int search(vector<int> &nums, int target) // TC = O(log n)
{
    // Write Your Code Here
    int n = nums.size();
    // int low = 0, high=n-1;          // iterative binary search
    // while(low<=high){
    //     int mid = (low+high)/2;
    //     if(nums[mid]==target) return mid;
    //     else if(nums[mid]<target) low=mid+1;
    //     else high =mid-1;
    // }
    // return -1;

    return bs(0, n - 1, nums, target);
}

// OVERFLOW case - when in a such a case we are given with an array from 0 to INT_MAX indices then at any some
// point of time low and high will be INT_MAX then mid = low+high/2 will exceed the int level so, we ahve to declare
// mid with long long int or int mid = low+((high-low)/2)