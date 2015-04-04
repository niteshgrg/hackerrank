#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    scanf("%d", &t);
    for(int i = 0; i<t;i++)
        {
        long long B,W,X,Y,Z,UB=0,UW=0;
        scanf("%d%d%d%d%d", &B, &W, &X, &Y, &Z);
        if(abs(X-Y) <= Z)
            {
            UB=B*X;
            UW=W*Y;
        }
        else if (X>Y)
            {
            UW=W*Y;
            UB=B*(Y+Z);
        }
        else
            {
            UB=B*X;
            UW=W*(X+Z);
        }
        printf("%lld\n", UB+UW);
    }
    return 0;
}
