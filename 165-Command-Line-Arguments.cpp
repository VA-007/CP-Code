Command Line Arguments:

#include<stdio.h>
void main(int argc,char** argv)
{
    //argc - count of arguments
    //argv - argument vectors
    printf("%d\n",argc);
}
//
./a.out 10 20 30
4

#include<stdio.h>
void main(int argc,char** argv)
{
    //argc - count of arguments
    //argv - argument vectors
    printf("%d\n",argv[1] + argv[2]);
}
//Error

#include<stdio.h>
#include<stdlib.h>
void main(int argc,char** argv)
{
    //argc - count of arguments
    //argv - argument vectors
    printf("%d\n",atoi(argv[1]) + atoi(argv[2]));
}
//./a.out 10 20
30

#include<stdio.h>
#include<stdlib.h>
void main(int argc,char** argv)
{
    //argc - count of arguments
    //argv - argument vectors
    printf("%d\n",atoi(argv[1]) + atoi(argv[2]));
}
//./a.out TEN TWENTY
0

#include<stdio.h>
#include<stdlib.h>
void main(int argc,char** argv)
{
    //argc - count of arguments
    //argv - argument vectors
    printf("%d\n",atoi(argv[1]) + atoi(argv[2]));
}
//./a.out 10.5 20.5
30

#include<stdio.h>
#include<stdlib.h>
void main(int argc,char** argv)
{
    //argc - count of arguments
    //argv - argument vectors
    printf("%f\n",atof(argv[1]) + atof(argv[2]));
}
//./a.out 10.5 20.5
30.000000

Structures, Pointers and Dynamic Memory Allocation

Dynamic Memory Allocation:
malloc
calloc
realloc
free

1: malloc is used to allocate memory to your program (continuous memory)

datatype pointer = (datatype *)malloc(size_in_bytes);
(Returns starting address)

#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *a,i,n;
    printf("Enter the number of elements");
    scanf("%d",&n);
    a = (int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}
//5
10 20 30 40 50
10 20 30 40 50

malloc gives initial values of the memory allocated as garbage values.

#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *a,i,n;
    printf("Enter the number of elements");
    scanf("%d",&n);
    a = (int *)malloc(n*sizeof(int));
    printf("%p\n",a);
}
//5
Some address

#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *a,i,n;
    printf("Enter the number of elements");
    scanf("%d",&n);
    a = (int *)malloc(n*sizeof(int));
    printf("%p\n",a);
}
//5000000000000000000
(nil) / NULL

Because: When continuous memory cannot be allocated, malloc returns NULL


#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *a,i,n;
    printf("Enter the number of elements");
    scanf("%d",&n);
    a = (int *)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}


calloc provides n elements in continuous memory by initializing all values to 0

#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *a,*b,i,n;
    printf("Enter the number of elements");
    scanf("%d",&n);
    a = (int *)malloc(sizeof(int)*n);
    printf("Old Address: %p\n",a);
    printf("Enter the number of elements");
    scanf("%d",&n);
    b = realloc(a,n*sizeof(int));
    printf("New Address: %p\n",b);
}


realloc:
increase to new size:
1: Starting address doesn't change given the new size is available from same starting addresses
2: Starting address changes and old data is copied to new address given there isn't enough space to allocate
3: New address is 0 if size is too much for memory

decrease to a new size:
starting address remains same

free();