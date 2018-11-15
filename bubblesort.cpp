/**************************************************************

Implementation of Bubble Sort in C++

Created By:- Nikhil Navadiya
Date:-11/15/2018

----Time Complexity----
Best Case:-    O(n)
Average Case:- O(n^2)
Worst Case:-   O(n^2)

***************************************************************/
#include<bits/stdc++.h>
using namespace std;



int main()
{
	int n=rand() % 100 +1; //Selecting Number of elements randomly
	vector<int> arr;
	for(int i=0;i<n;i++) //generating n elements randomly
	{
		arr.push_back(rand()%10000); 
	}
	
	cout<<"array elements before sorting "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";		
	}
	
		
   	for (int i = 0; i < n-1; i++)
	{    
		// Last i elements are already in place    
		for (int j = 0; j < n-i-1; j++)
		{
			if (arr[j] > arr[j+1])
			{
              			int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}

	cout<<endl<<"array elements after sorting "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";		
	}
	return 0;
}
