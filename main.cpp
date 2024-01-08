#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long merge(long long arr[], long long low, long long mid, long long high) {
        long long temp[high - low + 1];
        long long left = low;
        long long right = mid + 1;
        long long i = 0, count = 0;

        while (left <= mid && right <= high) {
            if (arr[left] <= arr[right]) {
                temp[i] = arr[left];
                left++;
            } else {
                temp[i] = arr[right];
                count += (mid - left + 1); // Counting inversions
                right++;
            }
            i++;
        }

        while (left <= mid) {
            temp[i] = arr[left];
            left++;
            i++;
        }

        while (right <= high) {
            temp[i] = arr[right];
            right++;
            i++;
        }

        for (long long i = low; i <= high; i++) {
            arr[i] = temp[i - low];
        }

        return count;
    }

    long long mergeSort(long long arr[], long long low, long long high) {
        long long count = 0;
        if (low < high) {
            long long mid = low + (high - low) / 2;
            count += mergeSort(arr, low, mid);
            count += mergeSort(arr, mid + 1, high);
            count += merge(arr, low, mid, high);
        }
        return count;
    }

    long long inversionCount(long long arr[], long long N) {
        return mergeSort(arr, 0, N - 1);
    }
};

int main() {
    long long T;
    cin >> T;

    while (T--) {
        long long N;
        cin >> N;

        long long A[N];
        for (long long i = 0; i < N; i++) {
            cin >> A[i];
        }

        Solution obj;
        cout << obj.inversionCount(A, N) << endl;
    }

    return 0;
}
