#include<stdio.h>
int main()

{
    int i=1;
    while(i<=10){
        if (i==5){
            i++;
            continue;
        }
        printf("2*%d = %d\n",i,(2*i));
        i++;
    }
    return 0;
}
// here we skip 5th iteration