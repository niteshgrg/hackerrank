#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int t, l=0;
	char s[10000];
	scanf("%d", &t);
	for(int i=0;i<t;i++)
	{
		
		int start=0, end, count=0;
		scanf("%s", s);
		l = strlen(s);
		end = l-1;
		while(start<end)
		{

			if(s[start]!=s[end])
			{
				count+=abs(s[start]-s[end]);
			}
			start++;
			end--;
		}
		printf("%d\n", count);
	}
	return 0;
}