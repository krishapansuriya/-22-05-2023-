#include<stdio.h>
main()
{
	int a[100];
	int i,n;
	printf("Enter size of array:-");
	scanf("%d",&n);
	printf("Enter array elements:-\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Array elements:-\n");
	for(i=0;i<n;i++)
	{
			printf("%d ",a[i]);
	}
}
