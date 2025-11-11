#include<stdio.h>
int main()
{
	int arr[]={7,18,45,49,50,56,69};
	int n = sizeof(arr)/sizedof(arr[0]);
	int key =4;
	int low =0, high= n-1,mid;
	int found = 0;
	while(low<=high)
	{
		mid = (low+high)/2;
		if(arr[mid] == key)
		{
			printf("element %d found at position %d\n",key,mid+1);
			found =1;
			break;
		}
		else if(key<arr[mid])
		{
			high = mid-1;
		}
		else
		{
			low=mid+1;
		}
		
	}
	if (!found)
	{
		printf("element %d not found in the array\n",key);
	}
	return 0;
}
