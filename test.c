#include<stdio.h>
//#define max_size 1000
int main() {
    int i,n;//a[max_size];

    
    printf("size of array:");
    scanf("%d",&n);   
    int a[n] ;
    printf("enter the value of array :n");
    for(i=0;i<n;i++) {
    scanf("%d",&a[i]);
    }
      printf(" the made array is:");
    for(i=0;i<n;i++) {
   
    printf(" %d",a[i]);
   }
    
     
   return 0;
}
