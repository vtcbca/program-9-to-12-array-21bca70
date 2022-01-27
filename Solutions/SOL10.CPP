/* wap to perform selection sort on array of 10 numerical value.
Date:24/01/22*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],n,c,d,po,sw;
	clrscr();
	printf("Enter number of element:");
	scanf("%d",&n);
	printf("\n Enter %d int:",n);
	for(c=0;c<n;c++)
	{
		scanf("%d",&a[c]);
	}
	for(c=0;c<n-1;c++)
	{
		po=c;
		for(d=c+1;d<n;d++)
		{
			if(a[po]>a[d])
			po=d;
		}
		if(po!=c)
		{
			sw=a[c];
			a[c]=a[po];
			a[po]=sw;
		}
	}
	printf("\n sort list in ascending order:");
	for(c=0;c<n;c++)
	{
		printf("\n %d",a[c]);
	}
	getch();
}
