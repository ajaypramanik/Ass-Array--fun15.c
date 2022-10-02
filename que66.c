//Write a function in C to read n number of values in an array and display it in reverse
//order.

#include<stdio.h>
void display();
void array();
int main() {
    int i,a[10]={20,14,15,18,25,30,45,80,60,40,};


   // printf("enter the value of array :n");
    //for(i=0;i<10;i++) {
   // scanf("%d",&a[i]);
   // }

    display(a);
    array(a);
     
   return 0;
}

void display(int a[]) {
    int i;
    for(i=0;i<10;i++)
    {
        printf("\t%d",a[i]);
       // printf("\n");
    }


}
void array(int a[]) {
    int i;
      printf("\nthe new array is:");
   
    
    //for(i=0;i<10;i++)
    for(i=9;i>=0;i--)
    {
    
    printf("\t%d",a[i]);
    }
    
    
}
