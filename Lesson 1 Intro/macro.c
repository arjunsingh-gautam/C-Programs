#define PI 3.14
# include<stdio.h>
int main(){
    float area;
    int r;
    printf("Enter the radius of Circle:");
    scanf("%d",&r);

    area= PI*r*r;
    printf("Area of circle is %f",area);
}
// to view only preprocessing :  gcc -E macro.c -o macro.i

// Without Macro
/* int main(){
    float PI=3.14
    float area;
    int r;
    printf("Enter the radius of Circle:");
    scanf("%d",&r);

    area= 3.14*r*r;
    printf("Area of circle is %f",area);
} */