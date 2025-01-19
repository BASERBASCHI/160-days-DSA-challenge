//Given an array of positive integers arr[], 
//return the second largest element from the array. 
//If the second largest element doesn't exist then return -1

#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: " ;
    cin >> n;

    if (n < 2) {
        cout << -1 << endl; // Not enough elements for a second largest
        return 0;
    }

    int arr[n];
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = -1, secondLargest = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    // If secondLargest is still -1, print -1
    cout <<"the second largest digit is : "<< (secondLargest == -1 ? -1 : secondLargest) << endl;

    return 0;
}

