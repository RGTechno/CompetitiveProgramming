// C++ Program to count number
// of subsequences in an array
// with sum less than or equal to X
#include <bits/stdc++.h>
using namespace std;

// Utility function to return the count
// of subsequence in an array with sum
// less than or equal to X
int countSubsequenceUtil(
    int ind, int sum,
    int *A, int N,
    vector<vector<int>> &dp)
{
    // Base condition
    if (ind == N)
        return 1;

    // Return if the sub-problem
    // is already calculated
    if (dp[ind][sum] != -1)
        return dp[ind][sum];

    // Check if the current element is
    // less than or equal to sum
    if (A[ind] <= sum)
    {
        // Count subsequences excluding
        // the current element
        dp[ind][sum] = countSubsequenceUtil(ind + 1, sum, A, N, dp) + // Count subsequences including
                                                                      // the current element
                       countSubsequenceUtil(
                           ind + 1,
                           sum - A[ind],
                           A, N, dp);
    }

    else
    {
        // Exclude current element
        dp[ind][sum] = countSubsequenceUtil(
            ind + 1,
            sum, A,
            N, dp);
    }

    // Return the result
    return dp[ind][sum];
}

// Function to return the count of subsequence
// in an array with sum less than or equal to X
int countSubsequence(int *A, int N, int X)
{
    // Initialize a DP array
    vector<vector<int>> dp(
        N,
        vector<int>(X + 1, -1));

    // Return the result
    return countSubsequenceUtil(0, X, A,
                                N, dp) -
           1;
}

// Driver Code
int main()
{
    int n,s;
    cin>>n>>s;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout << countSubsequence(arr, n, s);

    return 0;
}