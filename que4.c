/*Write a function to rotate an array by n position in d direction. The d is an indicative
value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )*/

#include<stdio.h>
void shift();
int main() {
    int a[5]={32,29,40,12,70};

    shift(a);
    return 0;

}

void shift(int a[]) {
    int i,j,temp;
    
for(j=1;j<=2;j++){
        temp=a[0];
     for(i=0;i<5;i++) 
            a[i]=a[i+1];
        
            a[4]=temp;

}


            printf("after shifting the right..\n");
            for(i=0;i<5;i++)
           printf("\t%d",a[i]);
             

           
     
     }
        
   
