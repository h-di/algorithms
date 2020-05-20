#include <iostream>
#include <algorithm>

using namespace std;

// *************************** BINARY SEARCH ***************************

// Parameters: (Array name, Array start index, Array end index, Element to search)
int binarySearch(int a[], int l, int r, int key) {
	while(l <= r) {
		int mid = l+(r-l)/2;	// Calculate mid index (avoiding overflow)
		if(key == a[mid])
			return mid;
		else if(key > a[mid])
			l = mid+1;
		else if(key < a[mid])
			r = mid-1;
	}	
	return -1; // if element is not present in array
}

// ******************************************************

int main() {
	int n = 5, key = 15;
	int a[n] = {5, 15, 20, 25, 30};

	int index = binarySearch(a, 0, n-1, key);	// Binary search works only in sorted list
	if(index == -1)
		cout << "Element is not present in array";
	else
		cout << "Element is present at index " << index;
	
	return 0;
}