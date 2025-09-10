#include<stdio.h>
#include<math.h>
int no_digits(int);
int check_arm(int);
int main()
{
    int i=1;
    printf("Armstrong numbers under 1000 are:");
    while(i<1001){
        if (check_arm(i)==1)
        printf("%d,",i);
        i++;
    }
}
int check_arm(int b)
{
   
    int n_digit;
    int ar_no=0;
    int new=b;
    n_digit=no_digits(b);
    while(new!=0){
        int r;
        r=new%10;
        ar_no+=pow(r,n_digit);
        new=new/10;

    }
    if(ar_no==b){
        return 1;
    }
    else{
        return 0;
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