#include <iostream>
#include <algorithm>

using namespace std;

// *************************** INSERTION SORT ***************************

// Parameters: (Array name, Array size)
void insertionSort(int a[], int n) {
	for(int i = 1; i < n; ++i) {
		int key = a[i];
		int j = i-1;
		while(j >= 0 && a[j] > key) {
			a[j+1] = a[j];
			--j;
		}
		swap(a[j+1], key);
	}
}

// ******************************************************

int main() {
	int n = 10;
	int a[n] = {70, 50, 0, 20, 10, 90, 80, 60, 30, 40};
	
	cout << "Original array: ";
	for(auto x:a)
		cout << x << " ";
	cout << endl;

	insertionSort(a, n);

	cout << "Sorted array: ";
	for(auto x:a)
		cout << x << " ";

	return 0;
}