#include <iostream>

using namespace std;

// *************************** LINEAR SEARCH ***************************

// Parameters: (Array name, Array size, Element to search)
int linearSearch(int a[], int n, int key) {
	for(int i = 0; i < n; ++i) {
		if(a[i] == key)
			return i;
	}
	return -1; // if element is not present in array
}

// ******************************************************

int main() {
	int n = 5, key = 10;
	int a[n] = {5, 15, 20, 10, 25};

	int index = linearSearch(a, n, key);
	if(index == -1)
		cout << "Element is not present in array";
	else
		cout << "Element is present at index " << index;
	
	return 0;
}