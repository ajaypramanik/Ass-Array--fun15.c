//Write a function to sort an array of any size. tsrs

#include<stdio.h>
void short_Array();
int main() {
    int i,a[10]={10,20,55,33,46,82,96,444,25,368};
     short_Array(a);
 

   return 0;
}

void  short_Array(int a[]) {
     int i,j,temp;

     for(i=0;i<10;i++) 
     {
        for(j=i+1;j<10;j++){
        if(a[i]>a[j]) {
          temp=a[i];
          a[i]=a[j];
          a[j]=temp;

     }
        }
     }
     for(i=0;i<10;i++) {
        printf("\t%d",a[i]);
        

     }

}
