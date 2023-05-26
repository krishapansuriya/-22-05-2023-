#include<stdio.h>
main()
{
	int arr[100];
	int i,n,sum=0,avg;
	printf("Enter size of array element=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	printf("sum of all element=%d",sum);
	avg=sum/5;
	printf("\nAverage=%d",avg);
}
