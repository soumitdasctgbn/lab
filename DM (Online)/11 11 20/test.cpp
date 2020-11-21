#include <bits/stdc++.h>
#include <chrono>
#define infile                      freopen("in.txt", "r", stdin);
#define outfile                     freopen ("out.txt","w",stdout);
#define fileclose                   fclose (stdin); fclose (stdout);
using namespace std;

int binarySearch(int left, int right, int val)
{
	if (right >= left) {
		int mid = left + (right - left) / 2;
		if (arr[mid] == x)
			return mid;

		if (arr[mid] > x)
			return binarySearch(arr, left, mid - 1, x);

		return binarySearch(arr, mid + 1, right, x);
	}

	return -1;
}

int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int x = 10;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = binarySearch(arr, 0, n - 1, x);
	(result == -1) ? cout << "Element is not present in array"
				: cout << "Element is present at index " << result;
	return 0;
}

