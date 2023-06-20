// lower bound of x is index of the smallest no which is greater than or equal to x
int lowerBound(vector<int> arr, int n, int x)
{
    // Write your code here
    int ans = n;
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] >= x)
        {
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return ans;
}

// c++ stl --> use lower_bound() function
// lb = lower_bound(arr.begin(),arr.end(),n) - arr.begin() it returns the inedx of lower bound
