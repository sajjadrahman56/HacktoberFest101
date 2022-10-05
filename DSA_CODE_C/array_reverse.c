# include<stdio.h>

void reverse(int n, int *a)
{
    int temp;
    if(n%2==0)
    {
        for(int i=0;i<n/2;i++)
        {
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
        }

    }

    if(n%2!=0)
    {
        for(int i=0;i<(n+1)/2;i++)
        {
        int temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
        }
    }
}

int main()
{
    int n;
    printf("Enter the size of array :\n");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d element : \n",i+1);
        scanf("%d",&arr[i]);
    }


printf("\n\n");
    printf("Array before reversing is : \n");
    for(int i=0;i<n;i++)
    {
        printf("\nValue of %d element is %d  \n",i+1,arr[i]);
    }

    reverse(n,arr);
printf("\n\n");

    printf("Array after reversing is :\n");
    for(int i=0;i<n;i++)
    {
        printf("\nValue of %d element is %d  \n",i+1,arr[i]);
    }
printf("\n\n");

    return 0;
}