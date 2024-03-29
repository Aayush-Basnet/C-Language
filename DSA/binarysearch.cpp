#include <iostream>
#include <vector>
using namespace std;
int binarySearch(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
      while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid; // Element found at index mid
        } else if (arr[mid] < target) {
            left = mid + 1; // Search in the right half
        } else {
            right = mid - 1; // Search in the left half  } }
       return -1;
	   }
	  }
	  } // Element not found }
int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    vector<int> vecArr(arr, arr + arrSize);
     int target = 14;
    int result = binarySearch(vecArr, target);
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
		 }
		 
       return 0; 
	}

