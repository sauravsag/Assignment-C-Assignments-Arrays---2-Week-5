#include <iostream>
using namespace std;

int findUnique(int arr[], int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        result = result ^ arr[i];
    }
    return result;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "The unique number is: " << findUnique(arr, n) << endl;

    return 0;
}
