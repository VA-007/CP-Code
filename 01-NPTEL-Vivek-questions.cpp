#include<iostream>
#include <stdio.h>
#include<string>
#include<algorithm>

using namespace std;

// union sample{
//   int x;
//   char y;
// };

// bool compare(int i,int j) {
//     return (i>j);
// }

int main()
{
    // int a[] = { 5, 20, 15 };
    // int *arr[3] = { a, a+1 ,a+2 };
    // cout<<*arr[*arr[1] - 19];

    // string s1 = "hello ";
    // string s2 = "world";
    // s1=strcat(strcpy(s2,s1),s2)
    // cout<<s1;
    
    // union sample ptr1;
    // ptr1.x = 97;
    // ptr1.y = 'B';
    // union sample *ptr2 = &ptr1;
    // cout<< ptr2->x + (*ptr2).y;
    // return 0;
    
    // int n = 10;
    // const int *p1 = &n;
    // int * const p2 = &n;
    // int const *p3 = &n;
    // int const * const p4 = &n;
    // *p1 = 20;
    // *p2 = 20;
    // *p3 = 20;
    // *p4 = 20;
    // cout<<*p1<<endl<<*p2<<endl<<*p3<<endl<<*p4;
    
    // int data[] = { 40,30,90,10,20,50,70,60,80 }; 
    // sort(data, data + 5, compare);
    // for(int i=0;i<9;i++) {
    //     cout<<data[i]<<" ";
    // }
    
    // int a[3] = {10,20,30};
    // int **p;
    // p = &a;
    // cout<<(*p)[0]<<" "<<(*p)[1];
    
    
    int a[] = {10,20,30,40,50,60}, *p;
    p = a + 5;
    int i = 0;
    
    while(i<3) {
        cout<<p[-i]<<" ";
        p++;
        i++;
    }
    
    return 0;
}
