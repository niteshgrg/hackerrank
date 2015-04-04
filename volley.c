#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int powers(long long base, long long n,long long mod)
{
    if(n==0)
       return 1;
    if(n==1)
    return base;
    long long halfn = powers(base, n/2, mod);
    if(n%2==0)
        return ( halfn * halfn ) % mod;
    else
        return ( ( ( halfn * halfn ) % mod ) * base ) % mod;
}

int multi_inverse(int n, int mod)
{
    return powers(n,mod-2,mod);
}

long long factorial(int n, int mod)
{
	long long temp=1;
	if (n==0)
	{
		return 1;
	}
	if (n ==1)
	{
		return 1;
	}
	else
	{
		return (n*factorial(n-1, mod))%mod;
	}


}


int main()
{
	long long total = 1, numerator = 1, denominator = 1, mod = 1000000007;
	int a, b, i;
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
		if (b > a)
		{
			int temp = b;
			b = a;
			a = temp;
		}
		numerator = factorial(a+b-1, mod);
		denominator = (factorial(b, mod)*factorial(a-1, mod))%mod;
		total = (numerator * multi_inverse(denominator, mod)) % mod;
	    printf("%lld", total);
		
	}
	else
	{
		numerator = factorial(48, mod);
		denominator = (factorial(24, mod)*factorial(24, mod))%mod;
		total = (numerator * multi_inverse(denominator, mod)) % mod;
		if (b < a)
		{
			int temp = b;
			b = a;
			a = temp;
		}
		a = a-24;
		total = (total * powers(2, a, mod))%mod;
		printf("%lld", total);



    }
	
    return 0;
}