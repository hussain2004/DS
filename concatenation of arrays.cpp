#include<stdio.h>
int main()
{
	int a[6],b[4],c[10];
	int i;
	printf("enter first array elements:\n");
	for(i=0;i<6;i++)
	{
	scanf("%d",&a[i]);
    }
    for(i=0;i<6;i++)
    printf("%d,",a[i]);
    printf("\nenter second array elements:\n");
	for(i=0;i<4;i++)
	{
	scanf("%d",&b[i]);
    }
   	for(i=0;i<4;i++)
    printf("%d,",b[i]);
    printf("\nafter concatenation\n");
    for(i=0;i<6;i++)
    printf("%d,",a[i]);
    for(i=0;i<4;i++)
    printf("%d,",b[i]);
    return 0;
}
