#include <iostream>

using namespace std;

// *************************** QUICK SORT ***************************

// Parameters: (Array name, Array start index, Array end index)
int partition(int a[], int l, int r) {
	int pivot = a[r];	// Select last element as pivot
	int partitionIndex = l;
	for(int i = l; i < r; ++i) {
		if(a[i] < pivot) {
			swap(a[partitionIndex], a[i]);
			++partitionIndex;
		}
	}
	swap(a[partitionIndex], a[r]);
	return partitionIndex;
}

// Parameters: (Array name, Array start index, Array end index)
void quickSort(int a[], int l, int r) {
	if(l < r) {
		int partitionIndex = partition(a, l, r);	// Settle pivot and find partition index
		quickSort(a, l, partitionIndex-1);	// quicksort left partition
		quickSort(a, partitionIndex+1, r);	// quicksort right partition
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

	quickSort(a, 0, n-1);

	cout << "Sorted array: ";
	for(auto x:a)
		cout << x << " ";

	return 0;
}