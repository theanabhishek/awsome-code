#include<stdio.h>
float cal(int );
main()
{
	int n;
	printf("enter the dgreee of angle");
	scanf("%d",&n);
	printf("value of sin(%d)=%f",n,cal(n));
	
}
float cal(int a)
{   float c,x;
	x=(a*3.1415)/180;
	c=x-(pow(x,3))/6+(pow(x,5))/120;
	return c;
}
