#include <iostream>

using namespace std;

// *************************** MERGE SORT ***************************

// Parameters: (Array name, Array start index, Array mid index, Array end index)
void merge(int a[], int l, int m, int r) {
	int lsize = m-l+1;
	int left[lsize];
	for(int i = 0; i < lsize; ++i)
		left[i] = a[l+i];

	int rsize = r-m;
	int right[rsize];
	for(int j = 0; j < rsize; ++j)
		right[j] = a[m+1+j];
	
	int i = 0, j = 0, k = l;
	while(i < lsize && j < rsize) {
		if(left[i] <= right[j]) {
			a[k] = left[i];
			++i;
		}
		else {
			a[k] = right[j];
			++j;
		}
		++k;
	}
	while(i < lsize) {
		a[k] = left[i];
		++i;
		++k;
	}
	while(j < rsize) {
		a[k] = right[j];
		++j;
		++k;
	}
}

// Parameters: (Array name, Array start index, Array end index)
void mergeSort(int a[], int l, int r) {
	if(l < r) {
		int mid = l+(r-l)/2;
		mergeSort(a, l, mid);	// mergesort left subarray
		mergeSort(a, mid+1, r);	// mergesort right subarray
		merge(a, l, mid, r);	// merge left and right subarray
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

	mergeSort(a, 0, n-1);

	cout << "Sorted array: ";
	for(auto x:a)
		cout << x << " ";

	return 0;
}