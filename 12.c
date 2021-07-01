//this is a program that will swap the smallest element of the array with the 0th element


#include<stdio.h>
#define max 100

int main()
{
	int i,size,arr[max],j,min,temp;

	printf("enter the size of the array: ");
	scanf("%d",&size);

	// printf("enter the elements of the array: \n");

	for(i=0;i<size;i++)
	{
		printf("enter the element %d : ",i+1);
		scanf("%d",&arr[i]);
	}

	min=0;

	for(j=0;j<size;j++)
	{
		if(arr[min]>arr[j])
			min=j;
	}

	if(min!=0)
	{
		temp=arr[0];
		arr[0]=arr[min];
		arr[min]=temp;
	}

	for(i=0;i<size;i++)
	{
		printf("%d  ",arr[i]);

	}
	printf("\n");
	return 0;

}