#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int gcd(int a, int b)
{
	if (b==0)
		return a;
	else
	{
		gcd(b, a%b);
	}
}
int main()
{
	int a,b,i,total = 1, denominator = 1;
	scanf("%d", &a);
	scanf("%d", &b);

	if (a<25 && b<25)
	{
		printf("0");
	}
	else if ((a > 25 || b > 25) && (abs(a - b) != 2))
	{
		printf("0");
	}
	else if ((a==24 || b==24)&&(abs(a - b) != 2))
	{
		printf("0");

	}
	else if (a==b)
	{
		printf("0");
	}
	else if(a <= 25 && b <= 25)
	{
		if (a > b)
		{
			for (i=a;i<a+b;i++)
			{
				total=total%1000000007;
				total*=i; 
			}
			printf("%lld\n", total);
			for (i=1;i<=b;i++)
			{
				denominator=denominator%1000000007;
				denominator*=i;

			}
			printf("%lld\n", denominator);
			int inv_deno = gcd(1000000007, denominator);

			total = (total * inv_deno)%1000000007;
	        printf("%lld", total);
		}
		else
		{
			for (i=b;i<a+b;i++)
			{
				total=total%1000000007;
				total*=i;
			}
			for (i=1;i<=a;i++)
			{
				denominator*=i;
			}
            total = (total/denominator)%1000000007;
	        printf("%lld", total);
		}
	}
	else
	{
		if (a > b)
		{
			for (i=a-1;i<a+b-1;i++)
			{
				total*=i; 
			}
			printf("%lld\n", total);
			for (i=1;i<=b;i++)
			{
				denominator*=i;

			}
			printf("%lld\n", denominator);
			total = (total/denominator)%1000000007;
	        printf("%lld", total);
		}
		else
		{
			for (i=b-1;i<a+b-1;i++)
			{
				total*=i;
			}
			for (i=1;i<=a;i++)
			{
				denominator*=i;
			}
            total = (total/denominator)%1000000007;
	        printf("%lld", total);
		}
	}
	
    return 0;
}