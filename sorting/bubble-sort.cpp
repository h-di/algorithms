#include <iostream>
#include <algorithm>

using namespace std;

// *************************** BUBBLE SORT ***************************

// Parameters: (Array name, Array size)
void bubbleSort(int a[], int n) {
	for(int i = 0; i < n-1; ++i) {
		for(int j = i+1; j < n; ++j) {
			if(a[i] > a[j])
				swap(a[i], a[j]);
		}
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

	bubbleSort(a, n);

	cout << "Sorted array: ";
	for(auto x:a)
		cout << x << " ";

	return 0;
}