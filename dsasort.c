#include <stdio.h>
int main()
{   int i,j,n;
    scanf("%d",&n);
    int arr[n];
    for ( i = 0; i < n; i++)
    {
      scanf("%d",&arr[i]); 
    }
    int temp,count=0;
    for( j=0;j<n;j++){
    for ( i=0;i<n-1-j;i++)
    { 
            if (arr[i] > arr[i+1])
            {
                 temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
             count++;
            } else{
                count++;
            }
    }    
}
printf("Count=%d\n",count);
// time complexity = Order(n*n)
// Space 
    for (int k = 0; k < 7; k++)
    {
        printf("%d ", arr[k]);
    }
    
}