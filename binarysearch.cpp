#include<iostream>
using namespace std;

 int binarySearch(int arr[],int n,int key)
 {
 	int start =0 ;
 	int end = n-1;
 	int mid = (start + end)/2;
 	while(start<=end)
 	{
 		
 		if(key == arr[mid])
 		{
 			return mid;
		 }
		  if(arr[mid]<key)
		 {
		 	start= mid+1;
		 }
		 else{
		 	end =  mid-1;
		 }
		 mid = (start+end)/2;
	 }
	 return -1;
 }

int main()
{
	int arr[5]={1,4,6,9,11};
    int index = binarySearch(arr,5,4);
    cout<<" elem found at pos "<< index <<endl;
}
