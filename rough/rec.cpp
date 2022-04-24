// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {      
        // Your code here
        vector<int> v;
        for (int i = 0; i < n - 1; i++)
        {
            
            v.push_back(i);
            int sum = arr[i];
            for (int j = i + 1; j < n; j++)
            {
                sum += arr[j];
                if (sum < s)
                {
                    continue;
                }
                else if (sum == s)
                {
                    v.push_back(j);
                    return v;
                }
                else
                {
                    v.pop_back();
                }
            }
        }
        return v;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long s;
        cin >> n >> s;
        int arr[n];
        const int mx = 1e9;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        vector<int> res;
        res = ob.subarraySum(arr, n, s);

        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }
    return 0;
} // } Driver Code Ends
