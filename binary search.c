#include<stdio.h>
main()
{
	int arr[5],search,start,end,middle,i;
	printf("enter the elements of array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the element to be searched\n");
	scanf("%d",&search);
	start=0;
	end=4;
	middle=(start+end)/2;
	while(search!=arr[middle]&&start<=end){
		if(search>arr[middle])
		start=middle+1;
		else
		end=middle-1;
		middle=(start+end)/2;
	}
	if(search==arr[middle])
	printf("%d is index of search ",middle+1);
	else
	printf("element is not found");
}
