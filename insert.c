#include <stdio.h>
int main()
{
    int k, j, i, p, n;
    printf("enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
     printf("Enter the position:");
    scanf("%d", &p);
    printf("Enter the element you want to insert:");
    scanf("%d", &k);

    for (i = n; i > p-1; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[p-1] = k;
    n++;
    for (j = 0; j < n; j++)
    {
        printf("%d ", arr[j]);
    }
    printf("\n");
}
