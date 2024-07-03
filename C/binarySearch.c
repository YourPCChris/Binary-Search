/*
Christopher Bennett
BianrySearch Alogrithm
28/07/2024
*/




#include <stdio.h>




void main()
{
	//printf("We Ball\n");
	printf("***Bianry Search***\n");

	int keepGoing = 1;
	int value;
	int start = 0;
	int end = 10;
	int mid = (start+end)/2;
	int arr[10] = {0,1,2,18,25,30,40,45,67,78};

	printf("Enter the number to find its index: ");
	scanf("%i", &value);
	printf("You have chosen %i\n", value);


	while (keepGoing == 1)
	{
		mid = (start + end)/2;

		if (arr[mid] == value){
			printf("Value found at index %i\n", mid);
			keepGoing = 0;
		}
		if (start > end){
			printf("Value is not in array\n");
			keepGoing = 0;
		}
		if (arr[mid] < value){ //value is to the right
			start = mid+1;
		}
		else if(arr[mid] > value){ //Value is to the left
			end = mid-1;
		}
	}

}
