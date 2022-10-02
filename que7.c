// Write a function in C to count a total number of duplicate elements in an array


#include<stdio.h>
void dublicate();
int main() {
    int i,n;

    
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
   dublicate(a,n);
    // printf("\ndublicate element is:%d",dublicate(a));
     
   return 0;
}

void dublicate(int a[] ,int n) {
    int i,n,count=0;
    for(int j=0;j<n;j++){
    for(i=j+1;i<n;i++){
    if(a[j]==a[i]){
        count++;
        break;
        

    }

    }
    }
    printf("\ndublicate element is:%d",count);
}
