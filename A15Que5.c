// 5. Write a function to find the first occurrence of adjacent duplicate values in the array. Function has to return the value of the element.

#include<stdio.h>
int dup(int*, int);

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int a[n], i, position;
    printf("Enter %d numbers: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    position=dup(a,n);
    printf("The position of first diplicate value occurence is %d.", position+1);

}

int dup(int b[], int n)
{
    int i, j;
    for(i=0; i<n-1; i++)
    {
        if(b[i]==b[i+1])
            return i;
    }
}