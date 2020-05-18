#include <stdio.h>
#include <malloc.h>
void main()
{int i,n,s= 0;
	int *a;
    printf("Enter the size of array \n");
	scanf("%d", &n);
 a = (int *) malloc(n * sizeof(int));
 printf("Enter Elements of First List \n");
	for (i = 0; i < n; i++)
        {scanf("%d", a + i);}
 for (i = 0; i < n; i++)
        {s=s+*(a + i);}
 printf("Sum of all elements in array = %d\n", s);
 getchar();}
