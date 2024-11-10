#include <iostream>
using namespace std;

// You are given an integer array prices where prices[i] is the price of NeetCoin on the ith day.
// You may choose a single day to buy one NeetCoin and choose a different day in the future to sell it.
// Return the max profit you can achieve.
// You may choose to not make any transactions, in which case the profit would be 0.

// Example 1:
// Input: prices = [10, 1, 5, 6, 7, 1]
// Output: 6
// 
// Example 2:
// prices = [10, 8, 7, 5, 2]
// Output: 0

// Constraints:
// 1 <= prices.length <= 100
// 0 <= prices[i] <= 100

int maxProfit(int arr[], int n) {
    int start = 0;
    int profit = 0;
    for(int i = 1; i < n; i++) {
        if(arr[start] > arr[i]) {
            start = i;
        } else {
            profit = max(profit, arr[i] - arr[start]);
        }
    }
    return profit;
}

int main() {
    cout << "Enter number of elements: \n";
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "maxProfit: " << maxProfit(arr, n) << '\n';
}

