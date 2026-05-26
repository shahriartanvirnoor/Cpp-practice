#include <stdio.h>

int main()
 {
    int x, i, j;
    printf("Enter x: ");
    scanf("%d", &x);

    for(i=1; i<=x; i++)
    {
        for(j=1; j<=x; j++){
            if(j>=i)
            printf("%d ", i);
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
 }