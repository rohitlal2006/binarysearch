#include<iostream>
using namespace std;
int main() {
    int arr[10], n, key;
    cout << "enter no of elements:";
    cin >> n;
    cout << "enter sorted array:\n";
    for(int i=0; i<n; i++) 
        cin >> arr[i];
    cout << "Enter element to search: ";
    cin >> key;
    int low = 0, high = n-1;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(arr[mid] == key) {
            cout << "element found at position " << mid + 1;
            return 0;
        }
        if(arr[mid] < key)
            low = mid + 1;
        else 
            high = mid -1;
    }
    cout << "element not found";
}