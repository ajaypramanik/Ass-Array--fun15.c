// Write a function to find the first occurrence of adjacent duplicate values in the array.
//Function has to return the value of the element.

#include<stdio.h>
int dublicate();
int main() {
    int i,a[10];


    printf("enter the value of array :n");
    for(i=0;i<10;i++) {
    scanf("%d",&a[i]);
    }
    printf("\ndublicate element is:%d",dublicate(a));
     
   return 0;
}

int dublicate(int a[]) {
    int i;
    for(i=0;i<10;i++)
    if(a[i]==a[i+1]){
        return a[i+1];
    }


}
