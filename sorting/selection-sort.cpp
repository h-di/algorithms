#include <iostream>
#include <algorithm>

using namespace std;

// *************************** SELECTION SORT ***************************

// Parameters: (Array name, Array size)
void selectionSort(int a[], int n) {
	for(int i = 0; i < n-1; ++i) {
		int min_index = i;
		for(int j = i+1; j < n; ++j) {
			if(a[j] < a[min_index])
				min_index = j;
		}
		swap(a[min_index], a[i]);
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

	selectionSort(a, n);

	cout << "Sorted array: ";
	for(auto x:a)
		cout << x << " ";

	return 0;
}