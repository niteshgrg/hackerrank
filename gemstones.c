#include <stdio.h>
#include <string.h>
int main()
{
	int n,count=0,i;
	char s[100];
	scanf("%d", &n);
	int a[n][26]={0};
	for(i=0;i<n;i++)
	{
		scanf("%s", s);
		int l = strlen(s);
		for(int j=0;j<l;j++)
		{
			if(i>0)
			{
				if(a[i-1][s[j]-'a'] == 1)
				{
					a[i][s[j]-'a'] = 1;
				}
			}
			else
			{
				a[i][s[j]-'a'] = 1;
			}
		}
	}
	for(int j=0;j<26;j++)
	{
		if(a[i-1][j]==1)
		{
			count++;
		}
	}
	printf("%d", count);
	return 0;

}