/*
 * Christopher Bennett
 * Binary Search in C++
 * 24/07/2024
*/


#include <iostream>

using namespace std;



int main()
{
	cout << "We Ball!" << "\n";
	cout << "Bianry Search\n";

	int start = 0;
	int arr[11] = {0,1,2,3,4,5,6,7,8,9,10};
	int arrSize = sizeof(arr) / sizeof(int);
	int end = arrSize;
	int mid = (start + end) / 2;
	int value;
	bool Found = false;
	
	cout << "Enter the number your looking for" << "\n";
	cin >> value; cout << "You Entered: " << value << "\n";


	while (start < end)
	{
		if (arr[mid] == value){
			cout << "\n\n\n\t"  << "value found at index: " << mid << "\n";
			cout << "\n\n\n";
			start = end + 1;
			Found = true;
		}else if (arr[mid] < value){
			start = mid + 1;
		}else if (arr[mid] > value){
			end = mid - 1;
		}

		mid = (start + end) / 2;
	}
	if (!Found){cout << "That number is not in the list :(" << "\n";}
	return 0;
}

