// 1. Write a function to find the greatest number from the given array of any size. (TSRS)

#include<stdio.h>
int array();
int main() {
    int i,a[10]={10,20,55,33,46,82,96,444,25,368};
     
    // int max=array(a);

//    printf("max number is: %d",max);
 printf("max number is: %d",array(a));
   return 0;
}

int array(int a[]) {
     int i,max=a[0];

     for(i=1;i<10;i++) 
     {
        if(max<a[i])
          max=a[i];

     }
     return max;

}