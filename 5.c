// Write a function to find the first occurrence of adjacent duplicate values in the array.
//Function has to return the value of the element.

#include<stdio.h>
int dublicate();
int main() {
    int i,n;

                                              /// THIS IS IN WORNG IN CALL FUNCTION LINE
                                              
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
    printf("\ndublicate element is:%d",dublicate(a));
     
   return 0;
}

int dublicate(int a[]) {
    int i,n;
    for(i=0;i<n;i++)
    if(a[i]==a[i+1]){
        return a[i+1];
    }


}
