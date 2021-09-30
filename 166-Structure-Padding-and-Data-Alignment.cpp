Structure Padding and Data Alignment

Struct variable addresses begin with 0 always
Every member of struct variables begins with a multiple of it's size as the starting Address

#include<stdio.h>
#include<string.h>
struct laptop {
  char a;
  float b;
};
void main()
{
    struct laptop l1;
    printf("%lu\n",sizeof(l1));
}
//8

#include<stdio.h>
#include<string.h>
struct laptop {
  char a;
  char c;
  int b;
};
void main()
{
    struct laptop l1;
    printf("%lu\n",sizeof(l1));
}
//8

#include<stdio.h>
#include<string.h>
struct laptop {
  char a;
  int b;
  char c;
};
void main()
{
    struct laptop l1;
    printf("%lu\n",sizeof(l1));
}
//12

#include<stdio.h>
#include<string.h>
struct laptop {
    unsigned int date:5; //Store from 0 to 31 (If signed, -16 to +15)
    unsigned int month:4; //store from 0 to 15
    unsigned int year:11; //Store from 0 to 2047
};
void main()
{
    struct laptop l1 = {28,5,2021};
    printf("%u\t%u\t%u\n",l1.date,l1.month,l1.year);
}
//28 5 2021

#include<stdio.h>
#include<string.h>
void main()
{
    int a:5;
    a = 16;
    printf("%d\n",a);
}
//Error