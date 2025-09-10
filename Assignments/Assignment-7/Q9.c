//Q9.Write a program to check whether a given number is an Armstrong number or not
#include<stdio.h>
#include<math.h>
int no_digits(int);
int main()
{
    int num;
    int n_digit;
    int ar_no=0;
    printf("Enter the number:");
    scanf("%d",&num);
    int new=num;
    n_digit=no_digits(num);
    while(new!=0){
        int r;
        r=new%10;
        ar_no+=pow(r,n_digit);
        new=new/10;

    }
    if(ar_no==num){
        printf("%d is a armstrong no.",num);
    }
    else{
        printf("%d is not a armstrong no.",num);
}

return 0;
    
}

int no_digits(int a){
    int digits=0;
    while(a!=0){
        a=a/10;
        digits=digits+1;
    }
    return digits;
}