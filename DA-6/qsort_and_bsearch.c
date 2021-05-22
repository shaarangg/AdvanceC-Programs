#include<stdio.h>
#include<stdlib.h>

int cmp(const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main()
{
    printf("Shaarang\n19BCT0215\n\n");
    int n,elem;
    int *ptr;
    printf("Enter the length of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements in the array\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    qsort(a, n, sizeof(int), cmp);
    printf("Sorted Array is:\n");
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nEnter the element you want to search: ");
    scanf("%d",&elem);
    ptr = (int*) bsearch(&elem, a, n, sizeof(int), cmp);
    if(ptr!=NULL)
        printf("Element found: %d\n",*ptr);
    else
        printf("Element not present in the array\n");
    return 0;
}