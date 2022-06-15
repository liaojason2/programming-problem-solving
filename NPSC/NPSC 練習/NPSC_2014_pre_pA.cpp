#include<stdio.h>
int main()
{
	int tests;
	double ab,h,bb,hbp,tb,sf,print,a,b,c,i;
	scanf("%d",&tests);
	for(i=0;i<tests;i++)
	{
		scanf("%lf%lf%lf%lf%lf%lf",&ab,&h,&bb,&hbp,&tb,&sf);
		a=ab*(h+bb+hbp);
		printf("%lf\n",a);
		b=tb*(ab+bb+sf+hbp);
		printf("%lf\n",b);
		c=ab*(ab+bb+sf+hbp);
		printf("%lf\n",c);

		print=(a+b)/c;
		printf("%lf\n",print);
	}
} 
