/**************************************************************

Implementation of Selection Sort in C++

Created By:- Nikhil Navadiya
Date:-11/15/2018

----Time Complexity----
Best Case:-    O(n^2)
Average Case:- O(n^2)
Worst Case:-   O(n^2)

***************************************************************/
#include<bits/stdc++.h>
using namespace std;

void selectionsort(vector<int> &arr)
{
	int n=arr.size();
	int minindex;
	for (int i = 0; i < n-1; i++) 
    	{
		minindex = i; 
		for (int j = i+1; j < n; j++) //finding index of minimum element in remaining unsorted array
		{
			if (arr[j] < arr[minindex])
			{ 
		    		minindex = j;
			}
		}
		swap(arr[minindex],arr[i]); 
    	} 
}

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
	
	selectionsort(arr);
   	

	cout<<endl<<"array elements after sorting "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";		
	}
	return 0;
}
