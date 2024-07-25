//
//Christopher Bennett
//Binary Search Algo




import java.util.Scanner;



public class binarySearch
{
	public static void main(String[] arg)
	{
		System.out.println("We Ball");	
		
		Scanner sc = new Scanner(System.in);
		boolean isFound = false ;
		double[] arr = {0,1,23,33,45,56,67,78,89,99};
		int size = arr.length;
		int start = 0;
		int end = size - 1;
		int mid = (start + end) / 2;

		//getting lost value
		System.out.println("Enter number to found");
		double value = sc.nextDouble();

		//Binary Search Algo	
		while (!isFound)
		{
			mid = (start + end) /2;
			if (start > end){
				System.out.println("Value is not in array");
				System.exit(0);
			}

			if (arr[mid] == value){
				System.out.println("Value Found at index " + mid);
				isFound = true;
				System.exit(0);
			}else if (arr[mid] < value){
				System.out.println("to the right");
				start = mid + 1;
			}else if (arr[mid] > value){
				System.out.println("to the left");
				end =  mid - 1;
			}
		}
		
	}
}

