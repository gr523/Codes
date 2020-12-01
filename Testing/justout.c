#include <stdio.h>
#include <stdlib.h>

int cmp (const void * a, const void * b) {
   return ( *(double*)a - *(double*)b );
}

int main(){
    double a1,a2,a3,pi=3.1416;
    a1 = 2*pi*5*11.6;
    a3 = 2*pi*6*10;
    a2 = 2*pi*3.2*11.2;

    double arr[3];
    arr[0]=a1,arr[1]=a2,arr[2]=a3;
    
    printf("Cylinder A:    %f\n",a1);
    printf("Cylinder B:    %f\n",a2);
    printf("Cylinder C:    %f\n",a3);

    qsort(arr, 3, sizeof(double), cmp);

    printf("Sorted values : \n%lf\n%lf\n%lf\n",arr[0],arr[1],arr[2]);

}