
public class DifferenceArrays {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int arr[] = {1, 2, 3, 4, 5};
		int arrLength = arr.length;
		int diff[] = new int[arrLength + 1];
		
		/*System.out.println(diff.length);*/
		
		/** Store the difference array*/
		int index = 0;
		for(int ele : arr)
			{
				if(index == 0)
					diff[index] = arr[index];
				else
					diff[index] = arr[index] - arr[index-1];
				index++;
			}
		diff[index] = 0; //one extra element is present in diff array
		
		/** This difference array can be utilized to update range of elements in O(1) 
		 * Say for eg. update range L-R => update value by X for all the indexes between L & R
		 * */
		
		//Test Case : update 4-4 with +100 => L = 1, R = 4, X = 100
		
		//step1: Add 100 to diff[L] = diff[1] => diff[1] += 100
		//step2: Subtract 100 from  diff[R+1] => diff[5] -= 100
		
		diff[4] += 100;
		diff[5] -= 100;
		
		//Try to print the updated arr
		arr[0] = diff[0];
		System.out.println("arr[0] = " + arr[0] );
		for(int i = 1; i < arrLength; i++)
			{
				arr[i] = arr[i-1] + diff[i];
				System.out.println(arr[i]);
			}
		
		//It Works!!!
		
		
		
		
		
	

	}

}
