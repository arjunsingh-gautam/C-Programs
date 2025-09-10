#include<stdio.h>
enum boolean isEven(int);
enum boolean{
        false,true // false=0 and true=1
    };
int main()
{
    
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(isEven(num)){
        printf("%d is an even number",num);
    }
    else{
        printf("%d is an odd number",num);
    }

}
enum boolean isEven(int x){
    if(x%2==0){
        return true;
    }
    else{
        return false;
    }
}