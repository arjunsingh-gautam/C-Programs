// Arrays:
/* - Derived data-types used to store more than one variable
- Array is a linear data-structure which stores homogenous values in sequential order
- Syntax:
    data_type array_name[size]; // Declaration
    data_type array_name[size]={val1,val2,val3..} // Declaration and initialisation
    array_name[index]=val_at_index; // Initialisation after declaration
- Bound-checking:No bound-checking at compile usually throws error during run-time operations
- In C array indexing starts from zero
 */


 /* #include<stdio.h>
 int main()
 {
    int arr[5]={1,2,3,4,5};
    int arr1[5];
    arr1[0]=10;
    arr1[1]=20;
    arr1[2]=30;
    arr1[3]=40;
    arr1[4]=50;
    arr[2]=39; // we can edit the index values of an array but we cannot expand the array
    printf("Array-1:");
    for(int i=0;i<5;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    printf("Array-2:");
    for(int i=0;i<5;i++){
        printf("%d\t",arr1[i]);
    }
 } */


// Passing array as function argument
/* #include<stdio.h>
void take_val(int b[],int s);
int main()
{
    int a[5];
    printf("Enter values:");
    take_val(a,5);
    printf("Array values:");
    for(int i=0;i<5;i++){
        printf("%d\t",a[i]);
    }
}
void take_val(int b[],int s){
    for(int i=0;i<s;i++){
        scanf("%d",&b[i]);
    }
} */

// Multidimensional Array
/* #include<stdio.h>
int main()
{
    int a[2][3]={{1,2,3},{4,5,6}};
    printf("Array:");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf(" %d ",a[i][j]);
        }
        printf("\n\t");
    }
} */

/* #include<stdio.h>
int main()
{
    char str[5]={'A','n','u','j'};
    for(int i=0;i<5;i++){
        printf("%c\n",str[i]);
    }
    printf("%s",str);
    
} */

// Taking  User Input
// M-1
#include<stdio.h>
int main()
{
    char str[50];
    printf("Enter a string:");
    scanf("%[^\n]",str);
    printf("Entered string:%s",str);
    printf("\n");
    getchar();
    printf("Modifying string:\n");
    fgets(str,sizeof(str),stdin);
    printf("Entered string:%s",str);

}