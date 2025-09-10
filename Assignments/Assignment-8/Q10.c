/* Q10.C program to find all roots of a quadratic equation using switch case */
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,D;
    float l,m;
    float root1,root2;
    printf("Enter coefficients of quadratic equation:");
    scanf("%d%d%d",&a,&b,&c);
    D=b*b -4*a*c;
    switch(1)
    {
        case 1:
            if(D==0){
                root1=root2=(-b)/(2*a);
                printf("The roots are equal and real and value is:%.2f",root1);
                break;
            }
        case 2:
            if(D>0){
                root1=(-b+sqrt(D))/(2*a);
                root2=(-b-sqrt(D))/(2*a);
                printf("The roots are distinct and real and value are:%.2f and %.2f",root1,root2);
                break;
            }
        case 3:
            l=(-b)/(2*a);
            m=sqrt(-D)/(2*a);
            printf("The roots are distinct and real and value are:%.2f -%.2fi. and %.2f +%.2fi",l,m,l,m);
            break;
    }
}