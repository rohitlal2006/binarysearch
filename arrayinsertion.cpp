#include<iostream>
using namespace std;
int main() {
    int n, pos, x;
    cout << "enter size of array:";
    cin >> n;
    int arr[50];
    cout << "enter  array elements:";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    cout << "enter elements to insert:";
    cin >> x;
    cout << "enter position to insert(0 to "<< n <<"):";
    cin >> pos;
    for(int i=n-1; i>=pos; i--) {
        arr[i+1] = arr[i];
    }
    arr[pos] = x;
    n++;
    cout << "array after insertion:";
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";

    }
    return 0;

}