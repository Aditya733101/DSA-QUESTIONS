// you are given an integer n and an integer array arr of size n+2. All elements of the array are in the range from 1 to n. Also, all elements occur once except two numbers which occur twice. Find the two repeating numbers.
// Note: Return the numbers in their order of appearing twice. So, if x and y are repeating numbers, and x's second appearance comes before the second appearance of y, then the order should be (x, y).

// Examples:
// Input: n = 4, arr[] = [1, 2, 1, 3, 4, 3]
// Output: 1 3
// Explanation: In the given array, 1 and 3 are repeated two times, and as 1's second appearance occurs before 2's second appearance, so the output should be 1 3.
// Input: n = 2, arr[] = [1, 2, 2, 1]
// Output: 2 1
// Explanation: In the given array, 1 and 2 are repeated two times and second occurence of 2 comes before 1. So the output is 2 1.
// Expected Time Complexity: O(n).
// Expected Auxiliary Space: O(1). 
#include <bits/stdc++.h>
using namespace std;

void findRepeatingNumbers(int arr[], int n) {
    map<int,int> freqMap;

    cout << "Repeating numbers: ";
    
    for (int i = 0; i < n + 2; i++) {
        freqMap[arr[i]]++;
        if (freqMap[arr[i]] == 2) {
            cout << arr[i] << " ";
        }
    }
}

int main() {
    int n = 4;
    int arr[] = {1, 2, 1, 3, 4, 3};
    findRepeatingNumbers(arr, n);
    
    return 0;
}